#include <rz_util.h>
#include "minunit.h"

bool test_rz_queue_add_remove(void) {
	int i, j;
	// Create queue with max size 5.
	RQueue* queue = rz_queue_new (5);
	for (i = 0; i < 5; i++) {
		mu_assert ("enqueue to available slot",
				rz_queue_enqueue (queue, (void*)(intptr_t)((i + 1) * 10)));
	}
	mu_assert_eq (queue->capacity, 5, "original capacity is 5");
	mu_assert ("enqueue but it's full! Increase Capacity!",
				rz_queue_enqueue (queue, (void*)(intptr_t)60));
	mu_assert_eq (queue->capacity, 10, "new capacity should be double old");
	for (i = 0; i < 6; i++) {
		j = (int)(intptr_t)rz_queue_dequeue (queue);
		mu_assert_eq (j, (i + 1) * 10, "front item from queue");
	}
	j = (int)(intptr_t)rz_queue_dequeue (queue);
	mu_assert_eq (j, (int)(intptr_t)NULL, "Empty queue dequeue.");
	rz_queue_free (queue);
	mu_end;
}

bool test_rz_queue_zero_size(void) {
	// Create queue with max size 0.
	RQueue* queue = rz_queue_new (0);
	mu_assert_eq ((int)(intptr_t)queue, (int)(intptr_t)NULL,
			"Create queue of size zero.");
	mu_end;
}

int all_tests() {
	mu_run_test(test_rz_queue_add_remove);
	mu_run_test(test_rz_queue_zero_size);
	return tests_passed != tests_run;
}

mu_main (all_tests)