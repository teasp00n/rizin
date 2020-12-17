#define THUMB_NONE                                 0x0
#define THUMB_REG                                  0x1
#define THUMB_CONST                                0x2
#define THUMB_OTHER                                0xf
#define THUMB_REG_REG                              0x11
#define THUMB_REG_CONST                            0x21
#define THUMB_OTHER_CONST                          0x2f
#define THUMB_REG_REG_REG                          0x111
#define THUMB_REG_REG_CONST                        0x211
#define THUMB_REG_CONST_CONST                      0x221
#define THUMB_REG_REG_SHIFT                        0x311
#define THUMB_REG_REG_CONST_CONST                  0x2211
#define THUMB_REG_REG_REG_SHIFT                    0x3111
#define THUMB_COPROC_CONST_REG_REG_REG             0x11124
#define THUMB_COPROC_CONST_REG_REG_REG_CONST       0x211124
#define THUMB_COPROC_CONST_COREG_COREG_COREG       0x55524
#define THUMB_COPROC_CONST_COREG_COREG_COREG_CONST 0x255524
#define THUMB_COPROC_COREG_BRACKREG_CONSTBRACK     0x8654
#define THUMB_COPROC_COREG_BRACKREGBRACK           0x754
#define THUMB_COPROC_COREG_BRACKREGBRACK_CONST     0x2754
#define THUMB_COPROC_COREG_BRACKREG_CONSTBRACKBANG 0x9654
#define THUMB_REGBANG_LIST                         0xba
#define THUMB_REG_LIST                             0xb1
#define THUMB_REG_BRACKREGBRACK                    0x71
#define THUMB_REG_BRACKREG_CONSTBRACK              0x861
#define THUMB_REG_BRACKREGBRACK_CONST              0x271
#define THUMB_REG_BRACKREG_CONSTBRACKBANG          0x961
#define THUMB_REG_BRACKREG_REGBRACK                0xc61
#define THUMB_REG_BRACKREG_REG_SHIFTBRACK          0xd161
#define THUMB_REG_REG_BRACKREGBRACK                0x711
#define THUMB_REG_REG_BRACKREG_CONSTBRACK          0x8611
#define THUMB_REG_REG_BRACKREGBRACK_CONST          0x2711
#define THUMB_REG_REG_BRACKREG_CONSTBRACKBANG      0x9611
#define THUMB_REG_OTHER                            0xf1
#define THUMB_COPROC_CONST_REG_COREG_COREG         0x55124
#define THUMB_COPROC_CONST_REG_COREG_COREG_CONST   0x255124
#define THUMB_COPROC_CONST_REG_REG_COREG           0x51124
#define THUMB_REG_REG_REG_REG                      0x1111
#define THUMB_BRACKREG_CONSTBRACK                  0x86
#define THUMB_BRACKREG_REGBRACK                    0xc6
#define THUMB_BRACKREG_REG_SHIFTBRACK              0xd16
#define THUMB_LIST                                 0xb
#define THUMB_REGBANG                              0xa
#define THUMB_OTHER_REG                            0x1f
#define THUMB_CONSTBANG                            0xe
#define THUMB_REG_CONST_REG                        0x121
#define THUMB_REG_CONST_REG_SHIFT                  0x3121
#define THUMB_REG_REG_REG_BRACKREGBRACK            0x7111

#define THUMB_NOSUFFIX 0x0
#define THUMB_LSUFFIX  0x100
#define THUMB_XSUFFIX  0x200
#define THUMB_LXSUFFIX 0x300
