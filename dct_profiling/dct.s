	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 15, 0	sdk_version 15, 1
	.section	__TEXT,__literal8,8byte_literals
	.p2align	3, 0x0                          ; -- Begin function init_cos_table
lCPI0_0:
	.quad	0x400921fb54442d18              ; double 3.1415926535897931
	.section	__TEXT,__text,regular,pure_instructions
	.globl	_init_cos_table
	.p2align	2
_init_cos_table:                        ; @init_cos_table
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	wzr, [x29, #-4]
	b	LBB0_1
LBB0_1:                                 ; =>This Loop Header: Depth=1
                                        ;     Child Loop BB0_3 Depth 2
	ldur	w8, [x29, #-4]
	subs	w8, w8, #8
	cset	w8, ge
	tbnz	w8, #0, LBB0_8
	b	LBB0_2
LBB0_2:                                 ;   in Loop: Header=BB0_1 Depth=1
	str	wzr, [sp, #8]
	b	LBB0_3
LBB0_3:                                 ;   Parent Loop BB0_1 Depth=1
                                        ; =>  This Inner Loop Header: Depth=2
	ldr	w8, [sp, #8]
	subs	w8, w8, #8
	cset	w8, ge
	tbnz	w8, #0, LBB0_6
	b	LBB0_4
LBB0_4:                                 ;   in Loop: Header=BB0_3 Depth=2
	ldr	w9, [sp, #8]
	mov	w8, #2                          ; =0x2
	mul	w8, w8, w9
	add	w8, w8, #1
	ldur	w9, [x29, #-4]
	mul	w8, w8, w9
	scvtf	d0, w8
	adrp	x8, lCPI0_0@PAGE
	ldr	d1, [x8, lCPI0_0@PAGEOFF]
	fmul	d0, d0, d1
	fmov	d1, #16.00000000
	fdiv	d0, d0, d1
	bl	_cos
	ldursw	x9, [x29, #-4]
	adrp	x8, _cos_table@GOTPAGE
	ldr	x8, [x8, _cos_table@GOTPAGEOFF]
	add	x8, x8, x9, lsl #6
	ldrsw	x9, [sp, #8]
	str	d0, [x8, x9, lsl #3]
	b	LBB0_5
LBB0_5:                                 ;   in Loop: Header=BB0_3 Depth=2
	ldr	w8, [sp, #8]
	add	w8, w8, #1
	str	w8, [sp, #8]
	b	LBB0_3
LBB0_6:                                 ;   in Loop: Header=BB0_1 Depth=1
	b	LBB0_7
LBB0_7:                                 ;   in Loop: Header=BB0_1 Depth=1
	ldur	w8, [x29, #-4]
	add	w8, w8, #1
	stur	w8, [x29, #-4]
	b	LBB0_1
LBB0_8:
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #32
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	_FDCT                           ; -- Begin function FDCT
	.p2align	2
_FDCT:                                  ; @FDCT
	.cfi_startproc
; %bb.0:
	stp	x28, x27, [sp, #-32]!           ; 16-byte Folded Spill
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16
	sub	sp, sp, #624
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	.cfi_offset w27, -24
	.cfi_offset w28, -32
	adrp	x8, ___stack_chk_guard@GOTPAGE
	ldr	x8, [x8, ___stack_chk_guard@GOTPAGEOFF]
	ldr	x8, [x8]
	stur	x8, [x29, #-24]
	str	x0, [sp, #96]
	str	x1, [sp, #88]
	add	x0, sp, #104
	mov	x1, #512                        ; =0x200
	bl	_bzero
	str	wzr, [sp, #84]
	b	LBB1_1
LBB1_1:                                 ; =>This Loop Header: Depth=1
                                        ;     Child Loop BB1_3 Depth 2
                                        ;       Child Loop BB1_11 Depth 3
                                        ;         Child Loop BB1_13 Depth 4
	ldr	w8, [sp, #84]
	subs	w8, w8, #8
	cset	w8, ge
	tbnz	w8, #0, LBB1_22
	b	LBB1_2
LBB1_2:                                 ;   in Loop: Header=BB1_1 Depth=1
	str	wzr, [sp, #80]
	b	LBB1_3
LBB1_3:                                 ;   Parent Loop BB1_1 Depth=1
                                        ; =>  This Loop Header: Depth=2
                                        ;       Child Loop BB1_11 Depth 3
                                        ;         Child Loop BB1_13 Depth 4
	ldr	w8, [sp, #80]
	subs	w8, w8, #8
	cset	w8, ge
	tbnz	w8, #0, LBB1_20
	b	LBB1_4
LBB1_4:                                 ;   in Loop: Header=BB1_3 Depth=2
	ldr	w8, [sp, #84]
	subs	w8, w8, #0
	cset	w8, ne
	tbnz	w8, #0, LBB1_6
	b	LBB1_5
LBB1_5:                                 ;   in Loop: Header=BB1_3 Depth=2
	fmov	d0, #2.00000000
	fsqrt	d1, d0
	fmov	d0, #1.00000000
	fdiv	d0, d0, d1
	str	d0, [sp, #16]                   ; 8-byte Folded Spill
	b	LBB1_7
LBB1_6:                                 ;   in Loop: Header=BB1_3 Depth=2
	fmov	d0, #1.00000000
	str	d0, [sp, #16]                   ; 8-byte Folded Spill
	b	LBB1_7
LBB1_7:                                 ;   in Loop: Header=BB1_3 Depth=2
	ldr	d0, [sp, #16]                   ; 8-byte Folded Reload
	str	d0, [sp, #72]
	ldr	w8, [sp, #80]
	subs	w8, w8, #0
	cset	w8, ne
	tbnz	w8, #0, LBB1_9
	b	LBB1_8
LBB1_8:                                 ;   in Loop: Header=BB1_3 Depth=2
	fmov	d0, #2.00000000
	fsqrt	d1, d0
	fmov	d0, #1.00000000
	fdiv	d0, d0, d1
	str	d0, [sp, #8]                    ; 8-byte Folded Spill
	b	LBB1_10
LBB1_9:                                 ;   in Loop: Header=BB1_3 Depth=2
	fmov	d0, #1.00000000
	str	d0, [sp, #8]                    ; 8-byte Folded Spill
	b	LBB1_10
LBB1_10:                                ;   in Loop: Header=BB1_3 Depth=2
	ldr	d0, [sp, #8]                    ; 8-byte Folded Reload
	str	d0, [sp, #64]
	movi	d0, #0000000000000000
	str	d0, [sp, #56]
	str	wzr, [sp, #52]
	b	LBB1_11
LBB1_11:                                ;   Parent Loop BB1_1 Depth=1
                                        ;     Parent Loop BB1_3 Depth=2
                                        ; =>    This Loop Header: Depth=3
                                        ;         Child Loop BB1_13 Depth 4
	ldr	w8, [sp, #52]
	subs	w8, w8, #8
	cset	w8, ge
	tbnz	w8, #0, LBB1_18
	b	LBB1_12
LBB1_12:                                ;   in Loop: Header=BB1_11 Depth=3
	str	wzr, [sp, #48]
	b	LBB1_13
LBB1_13:                                ;   Parent Loop BB1_1 Depth=1
                                        ;     Parent Loop BB1_3 Depth=2
                                        ;       Parent Loop BB1_11 Depth=3
                                        ; =>      This Inner Loop Header: Depth=4
	ldr	w8, [sp, #48]
	subs	w8, w8, #8
	cset	w8, ge
	tbnz	w8, #0, LBB1_16
	b	LBB1_14
LBB1_14:                                ;   in Loop: Header=BB1_13 Depth=4
	ldr	x8, [sp, #96]
	ldrsw	x9, [sp, #52]
	add	x8, x8, x9, lsl #5
	ldrsw	x9, [sp, #48]
	ldr	s1, [x8, x9, lsl #2]
                                        ; implicit-def: $d0
	fmov	s0, s1
	sshll.2d	v0, v0, #0
                                        ; kill: def $d0 killed $d0 killed $q0
	scvtf	d0, d0
	str	d0, [sp, #40]
	ldrsw	x10, [sp, #84]
	adrp	x8, _cos_table@GOTPAGE
	ldr	x8, [x8, _cos_table@GOTPAGEOFF]
	mov	x9, x8
	add	x9, x9, x10, lsl #6
	ldrsw	x10, [sp, #52]
	ldr	d0, [x9, x10, lsl #3]
	str	d0, [sp, #32]
	ldrsw	x9, [sp, #80]
	add	x8, x8, x9, lsl #6
	ldrsw	x9, [sp, #48]
	ldr	d0, [x8, x9, lsl #3]
	str	d0, [sp, #24]
	ldr	d0, [sp, #40]
	ldr	d1, [sp, #32]
	fmul	d0, d0, d1
	ldr	d1, [sp, #24]
	ldr	d2, [sp, #56]
	fmadd	d0, d0, d1, d2
	str	d0, [sp, #56]
	b	LBB1_15
LBB1_15:                                ;   in Loop: Header=BB1_13 Depth=4
	ldr	w8, [sp, #48]
	add	w8, w8, #1
	str	w8, [sp, #48]
	b	LBB1_13
LBB1_16:                                ;   in Loop: Header=BB1_11 Depth=3
	b	LBB1_17
LBB1_17:                                ;   in Loop: Header=BB1_11 Depth=3
	ldr	w8, [sp, #52]
	add	w8, w8, #1
	str	w8, [sp, #52]
	b	LBB1_11
LBB1_18:                                ;   in Loop: Header=BB1_3 Depth=2
	ldr	d1, [sp, #72]
	fmov	d0, #0.25000000
	fmul	d0, d0, d1
	ldr	d1, [sp, #64]
	fmul	d0, d0, d1
	ldr	d1, [sp, #56]
	fmul	d0, d0, d1
	ldrsw	x10, [sp, #84]
	add	x8, sp, #104
	mov	x9, x8
	add	x9, x9, x10, lsl #6
	ldrsw	x10, [sp, #80]
	str	d0, [x9, x10, lsl #3]
	ldrsw	x9, [sp, #84]
	add	x8, x8, x9, lsl #6
	ldrsw	x9, [sp, #80]
	ldr	d0, [x8, x9, lsl #3]
	fcvtas	w8, d0
	ldr	x9, [sp, #88]
	ldrsw	x10, [sp, #84]
	add	x9, x9, x10, lsl #5
	ldrsw	x10, [sp, #80]
	str	w8, [x9, x10, lsl #2]
	b	LBB1_19
LBB1_19:                                ;   in Loop: Header=BB1_3 Depth=2
	ldr	w8, [sp, #80]
	add	w8, w8, #1
	str	w8, [sp, #80]
	b	LBB1_3
LBB1_20:                                ;   in Loop: Header=BB1_1 Depth=1
	b	LBB1_21
LBB1_21:                                ;   in Loop: Header=BB1_1 Depth=1
	ldr	w8, [sp, #84]
	add	w8, w8, #1
	str	w8, [sp, #84]
	b	LBB1_1
LBB1_22:
	ldur	x9, [x29, #-24]
	adrp	x8, ___stack_chk_guard@GOTPAGE
	ldr	x8, [x8, ___stack_chk_guard@GOTPAGEOFF]
	ldr	x8, [x8]
	subs	x8, x8, x9
	cset	w8, eq
	tbnz	w8, #0, LBB1_24
	b	LBB1_23
LBB1_23:
	bl	___stack_chk_fail
LBB1_24:
	add	sp, sp, #624
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	ldp	x28, x27, [sp], #32             ; 16-byte Folded Reload
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	_main                           ; -- Begin function main
	.p2align	2
_main:                                  ; @main
	.cfi_startproc
; %bb.0:
	stp	x28, x27, [sp, #-32]!           ; 16-byte Folded Spill
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16
	sub	sp, sp, #560
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	.cfi_offset w27, -24
	.cfi_offset w28, -32
	adrp	x8, ___stack_chk_guard@GOTPAGE
	ldr	x8, [x8, ___stack_chk_guard@GOTPAGEOFF]
	ldr	x8, [x8]
	stur	x8, [x29, #-24]
	str	wzr, [sp, #36]
	bl	_init_cos_table
	add	x0, sp, #296
	str	x0, [sp, #16]                   ; 8-byte Folded Spill
	mov	x2, #256                        ; =0x100
	adrp	x1, l___const.main.input@PAGE
	add	x1, x1, l___const.main.input@PAGEOFF
	bl	_memcpy
	ldr	x0, [sp, #16]                   ; 8-byte Folded Reload
	add	x1, sp, #40
	bl	_FDCT
	adrp	x0, l_.str@PAGE
	add	x0, x0, l_.str@PAGEOFF
	bl	_printf
	str	wzr, [sp, #32]
	b	LBB2_1
LBB2_1:                                 ; =>This Loop Header: Depth=1
                                        ;     Child Loop BB2_3 Depth 2
	ldr	w8, [sp, #32]
	subs	w8, w8, #8
	cset	w8, ge
	tbnz	w8, #0, LBB2_8
	b	LBB2_2
LBB2_2:                                 ;   in Loop: Header=BB2_1 Depth=1
	str	wzr, [sp, #28]
	b	LBB2_3
LBB2_3:                                 ;   Parent Loop BB2_1 Depth=1
                                        ; =>  This Inner Loop Header: Depth=2
	ldr	w8, [sp, #28]
	subs	w8, w8, #8
	cset	w8, ge
	tbnz	w8, #0, LBB2_6
	b	LBB2_4
LBB2_4:                                 ;   in Loop: Header=BB2_3 Depth=2
	ldrsw	x9, [sp, #32]
	add	x8, sp, #40
	add	x8, x8, x9, lsl #5
	ldrsw	x9, [sp, #28]
	ldr	w9, [x8, x9, lsl #2]
                                        ; implicit-def: $x8
	mov	x8, x9
	mov	x9, sp
	str	x8, [x9]
	adrp	x0, l_.str.1@PAGE
	add	x0, x0, l_.str.1@PAGEOFF
	bl	_printf
	b	LBB2_5
LBB2_5:                                 ;   in Loop: Header=BB2_3 Depth=2
	ldr	w8, [sp, #28]
	add	w8, w8, #1
	str	w8, [sp, #28]
	b	LBB2_3
LBB2_6:                                 ;   in Loop: Header=BB2_1 Depth=1
	adrp	x0, l_.str.2@PAGE
	add	x0, x0, l_.str.2@PAGEOFF
	bl	_printf
	b	LBB2_7
LBB2_7:                                 ;   in Loop: Header=BB2_1 Depth=1
	ldr	w8, [sp, #32]
	add	w8, w8, #1
	str	w8, [sp, #32]
	b	LBB2_1
LBB2_8:
	ldur	x9, [x29, #-24]
	adrp	x8, ___stack_chk_guard@GOTPAGE
	ldr	x8, [x8, ___stack_chk_guard@GOTPAGEOFF]
	ldr	x8, [x8]
	subs	x8, x8, x9
	cset	w8, eq
	tbnz	w8, #0, LBB2_10
	b	LBB2_9
LBB2_9:
	bl	___stack_chk_fail
LBB2_10:
	mov	w0, #0                          ; =0x0
	add	sp, sp, #560
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	ldp	x28, x27, [sp], #32             ; 16-byte Folded Reload
	ret
	.cfi_endproc
                                        ; -- End function
	.comm	_cos_table,512,3                ; @cos_table
	.section	__TEXT,__const
	.p2align	2, 0x0                          ; @__const.main.input
l___const.main.input:
	.long	52                              ; 0x34
	.long	55                              ; 0x37
	.long	61                              ; 0x3d
	.long	66                              ; 0x42
	.long	70                              ; 0x46
	.long	61                              ; 0x3d
	.long	64                              ; 0x40
	.long	73                              ; 0x49
	.long	63                              ; 0x3f
	.long	59                              ; 0x3b
	.long	66                              ; 0x42
	.long	90                              ; 0x5a
	.long	109                             ; 0x6d
	.long	85                              ; 0x55
	.long	69                              ; 0x45
	.long	72                              ; 0x48
	.long	62                              ; 0x3e
	.long	59                              ; 0x3b
	.long	68                              ; 0x44
	.long	113                             ; 0x71
	.long	144                             ; 0x90
	.long	104                             ; 0x68
	.long	66                              ; 0x42
	.long	73                              ; 0x49
	.long	63                              ; 0x3f
	.long	58                              ; 0x3a
	.long	71                              ; 0x47
	.long	122                             ; 0x7a
	.long	154                             ; 0x9a
	.long	106                             ; 0x6a
	.long	70                              ; 0x46
	.long	69                              ; 0x45
	.long	67                              ; 0x43
	.long	61                              ; 0x3d
	.long	68                              ; 0x44
	.long	104                             ; 0x68
	.long	126                             ; 0x7e
	.long	88                              ; 0x58
	.long	68                              ; 0x44
	.long	70                              ; 0x46
	.long	79                              ; 0x4f
	.long	65                              ; 0x41
	.long	60                              ; 0x3c
	.long	70                              ; 0x46
	.long	77                              ; 0x4d
	.long	68                              ; 0x44
	.long	58                              ; 0x3a
	.long	75                              ; 0x4b
	.long	85                              ; 0x55
	.long	71                              ; 0x47
	.long	64                              ; 0x40
	.long	59                              ; 0x3b
	.long	55                              ; 0x37
	.long	61                              ; 0x3d
	.long	65                              ; 0x41
	.long	83                              ; 0x53
	.long	87                              ; 0x57
	.long	79                              ; 0x4f
	.long	69                              ; 0x45
	.long	68                              ; 0x44
	.long	65                              ; 0x41
	.long	76                              ; 0x4c
	.long	78                              ; 0x4e
	.long	94                              ; 0x5e

	.section	__TEXT,__cstring,cstring_literals
l_.str:                                 ; @.str
	.asciz	"DCT Coefficients:\n"

l_.str.1:                               ; @.str.1
	.asciz	"%4d "

l_.str.2:                               ; @.str.2
	.asciz	"\n"

.subsections_via_symbols
