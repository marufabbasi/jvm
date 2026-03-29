#pragma once
extern std::vector<std::string> OpcodeDesc;

#define nop 0
#define aconst_null 1 /*(0x1)*/ 
#define iconst_m1 2 /*(0x2)*/ 
#define iconst_0 3 /*(0x3)*/
#define iconst_1 4 /*(0x4)*/ 
#define iconst_2 5 /*(0x5)*/ 
#define iconst_3 6 /*(0x6)*/ 
#define iconst_4 7 /*(0x7)*/ 
#define iconst_5 8 /*(0x8)*/

#define bipush 16 /*(0x10)*/
#define sipush 17 /*(0x11)*/

#define lconst_0 9 /*(0x9)*/ 
#define lconst_1 10 /*(0xa)*/

#define ldc 18 /* (0x12) */

#define ldc2_w 20 /*(0x14)*/

#define iload 21 /*(0x15)*/

#define lload 22 /*(0x16)*/
#define fload 23 /*(0x17)*/

#define aload 25 /*(0x19)*/

#define iload_0 26 /*(0x1a)*/ 
#define iload_1 27 /*(0x1b)*/ 
#define iload_2 28 /*(0x1c)*/ 
#define iload_3 29 /*(0x1d)*/

#define lload_0 30 /*(0x1e) */
#define lload_1 31 /*(0x1f) */
#define lload_2 32 /*(0x20) */
#define lload_3 33 /*(0x21) */

#define fload_0 34 /*(0x22)*/ 
#define fload_1 35 /*(0x23) */
#define fload_2 36 /*(0x24) */
#define fload_3 37 /*(0x25)*/

#define aload_0 42 /* (0x2a) */
#define aload_1 43 /*(0x2b) */
#define aload_2 44 /*(0x2c) */
#define aload_3 45 /*(0x2d)*/

#define iaload 46 /*(0x2e)*/

#define aaload 50

#define istore 54 /*(0x36)*/
#define fstore 56 /*(0x38)*/
#define astore 58 /*(0x3a)*/

#define istore_0 59 /*(0x3b)*/ 
#define istore_1 60 /*(0x3c) */
#define istore_2 61 /*(0x3d) */
#define istore_3 62 /*(0x3e)*/

#define lstore_0 63 /*(0x3f) */
#define lstore_1 64 /*(0x40) */
#define lstore_2 65 /*(0x41) */
#define lstore_3 66 /*(0x42) */

#define fstore_0 67 /*(0x43) */
#define fstore_1 68 /*(0x44) */
#define fstore_2 69 /*(0x45) */
#define fstore_3 70 /*(0x46) */

#define astore_0 75 /*(0x4b) */
#define astore_1 76 /*(0x4c) */
#define astore_2 77 /*(0x4d) */
#define astore_3 78 /*(0x4e)*/
#define iastore 79 /*(0x4f)*/

#define aastore 83 /*(0x53)*/

#define pop 87 /*(0x57)*/
#define dup 89 /*(0x59)*/
#define dup_x1 90 /*(0x5a)*/
#define dup_x2 91 /*(0x5b)*/

#define iadd 96 /*(0x60)*/
#define ladd 97 /*(0x61)*/

#define isub 100 /*(0x64)*/
#define imul 104 /*(0x68)*/
#define idiv 108 /*(0x6c)*/

#define iinc 132 /*(0x84)*/

#define ifeq 153 /*(0x99) */
#define ifne 154 /*(0x9a) */
#define iflt 155 /*(0x9b) */
#define ifge 156 /*(0x9c) */
#define ifgt 157 /*(0x9d) */
#define ifle 158 /*(0x9e)*/

#define if_icmpeq 159 /*(0x9f) */
#define if_icmpne 160 /*(0xa0) */
#define if_icmplt 161 /*(0xa1) */
#define if_icmpge 162 /*(0xa2) */
#define if_icmpgt 163 /*(0xa3) */
#define if_icmple 164 /*(0xa4)*/

#define _goto 167 /*(0xa7)*/

#define ireturn 172 /*(0xac)*/
#define lreturn 173 /*(0xad)*/
#define freturn 174 /*(0xae)*/
#define dreturn 175 /*(0xaf)*/
#define areturn 176 /*(0xb0)*/
#define _return 177 /*(0xb1)*/

#define getfield 180 /*(0xb4)*/
#define putfield 181 /*(0xb5)*/

#define invokevirtual 182 /*(0xb6)*/
#define invokespecial  183 /*(0xb7) */
#define invokestatic 184

#define _new 187 /*(0xbb)*/

#define newarray 188 /*(0xbc)*/
#define anewarray 189 /*(0xbd)*/
#define athrow 191 /* (0xbf) */
#define checkcast 192 /* (0xc0) */
#define instanceof 193 /* (0xc1) */ 
#define monitorenter 194 /* (0xc2) */
#define monitorexit 195 /* (0xc3) */

// Implementation in progress
#define ldc_w 19 /*(0x13) todo */
#define irem 112 /*(0x70) todo */
#define ineg 116 /*(0x74) todo */
#define ishl 120 /*(0x78) todo */
#define ishr 122 /*(0x7a) todo */
#define iushr 124 /*(0x7c) todo */
#define iand 126 /*(0x7e) todo */
#define ior 128 /*(0x80) todo */
#define ixor 130 /*(0x82) todo */
#define i2b 145 /*(0x91) todo */
#define i2c 146 /*(0x92) todo */
#define i2s 147 /*(0x93) todo */
#define swap 95 /*(0x5f) todo */
#define getstatic 178 /*(0xb2) todo */
#define putstatic 179 /*(0xb3) todo */
#define ifnull 198 /*(0xc6) todo */
#define ifnonnull 199 /*(0xc7) todo */

// Not implemented
#define tableswitch 170 /* todo */
#define invokeinterface 185 /* todo */
#define invokedynamic 186 /* todo (0xba) */
#define arraylength 190 /* todo */

#define i2l 133 /*(0x85) todo */
#define i2f 134 /*(0x86) todo */
#define i2d 135 /*(0x87) todo */
#define if_acmpeq 165 /*(0xa5) todo */
#define if_acmpne 166 /*(0xa6) todo */
#define pop2 88 /*(0x58) todo */
#define lstore 55 /*(0x37) todo */
#define ldiv 109 /*(0x6d) todo */
#define lmul 105 /*(0x69) todo */
#define lsub 101 /*(0x65) todo */
#define lrem 113 /*(0x71) todo */
#define lneg 117 /*(0x75) todo */
#define land 127 /*(0x7f) todo */
#define lor 129 /*(0x81) todo */
#define lxor 131 /*(0x83) todo */
#define lshl 121 /*(0x79) todo */
#define lshr 123 /*(0x7b) todo */
#define lushr 125 /*(0x7d) todo */
#define lcmp 148 /*(0x94) todo */
#define laload 47 /*(0x2f) todo */
#define lastore 80 /*(0x50) todo */
#define l2i 136 /*(0x88) todo */
#define l2f 137 /*(0x89) todo */
#define l2d 138 /*(0x8a) todo */
#define fconst_0 11 /*(0x0b) todo */
#define fconst_1 12 /*(0x0c) todo */
#define fconst_2 13 /*(0x0d) todo */
#define fadd 98 /*(0x62) todo */
#define fsub 102 /*(0x66) todo */
#define fmul 106 /*(0x6a) todo */
#define fdiv 110 /*(0x6e) todo */
#define frem 114 /*(0x72) todo */
#define fneg 118 /*(0x76) todo */
#define faload 48 /*(0x30) todo */
#define fastore 81 /*(0x51) todo */
#define fcmpg 150 /*(0x96) todo */
#define fcmpl 149 /*(0x95) todo */
#define f2i 139 /*(0x8b) todo */
#define f2l 140 /*(0x8c) todo */
#define f2d 141 /*(0x8d) todo */
#define dconst_0 14 /*(0x0e) todo */
#define dconst_1 15 /*(0x0f) todo */
#define dadd 99 /*(0x63) todo */
#define dsub 103 /*(0x67) todo */
#define dmul 107 /*(0x6b) todo */
#define ddiv 111 /*(0x6f) todo */
#define drem 115 /*(0x73) todo */
#define dneg 119 /*(0x77) todo */
#define daload 49 /*(0x31) todo */
#define dastore 82 /*(0x52) todo */
#define dcmpg 152 /*(0x98) todo */
#define dcmpl 151 /*(0x97) todo */
#define dload 24 /*(0x18) todo */
#define dload_0 38 /*(0x26) todo */
#define dload_1 39 /*(0x27) todo */
#define dload_2 40 /*(0x28) todo */
#define dload_3 41 /*(0x29) todo */
#define dstore 57 /*(0x39) todo */
#define dstore_0 71 /*(0x47) todo */
#define dstore_1 72 /*(0x48) todo */
#define dstore_2 73 /*(0x49) todo */
#define dstore_3 74 /*(0x4a) todo */
#define d2i 142 /*(0x8e) todo */
#define d2l 143 /*(0x8f) todo */
#define d2f 144 /*(0x90) todo */
#define lookupswitch 171 /*(0xab) todo */
#define wide 196 /*(0xc4) todo */
#define multianewarray 197 /*(0xc5) todo */
#define ret 169 /*(0xa9) todo */
#define jsr 168 /*(0xa8) todo */
#define jsr_w 201 /*(0xc9) todo */
#define goto_w 200 /*(0xc8) todo */
#define baload 51 /*(0x33) todo */
#define bastore 84 /*(0x54) todo */
#define caload 52 /*(0x34) todo */
#define castore 85 /*(0x55) todo */
#define saload 53 /*(0x35) todo */
#define sastore 86 /*(0x56) todo */
#define dup2 92 /*(0x5c) todo */
#define dup2_x1 93 /*(0x5d) todo */
#define dup2_x2 94 /*(0x5e) todo */
