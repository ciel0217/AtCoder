	.file	"ABC124_A.c"
	.intel_syntax noprefix
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "%d %d\0"
LC1:
	.ascii "%d\12\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB10:
	.cfi_startproc
	push	ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	mov	ebp, esp
	.cfi_def_cfa_register 5
	and	esp, -16
	sub	esp, 48
	call	___main
	mov	DWORD PTR [esp+44], 0
	mov	DWORD PTR [esp+32], 0
	lea	eax, [esp+16]
	mov	DWORD PTR [esp+8], eax
	lea	eax, [esp+20]
	mov	DWORD PTR [esp+4], eax
	mov	DWORD PTR [esp], OFFSET FLAT:LC0
	call	_scanf
	mov	eax, DWORD PTR [esp+20]
	lea	edx, [eax-1]
	mov	eax, DWORD PTR [esp+20]
	add	eax, edx
	mov	DWORD PTR [esp+28], eax
	mov	eax, DWORD PTR [esp+16]
	lea	edx, [eax-1]
	mov	eax, DWORD PTR [esp+16]
	add	eax, edx
	mov	DWORD PTR [esp+24], eax
	mov	eax, DWORD PTR [esp+28]
	cmp	eax, DWORD PTR [esp+24]
	jle	L2
	mov	eax, DWORD PTR [esp+28]
	mov	DWORD PTR [esp+44], eax
	jmp	L3
L2:
	mov	eax, DWORD PTR [esp+24]
	mov	DWORD PTR [esp+44], eax
L3:
	mov	eax, DWORD PTR [esp+20]
	mov	DWORD PTR [esp+40], eax
	jmp	L4
L8:
	mov	DWORD PTR [esp+32], 0
	mov	eax, DWORD PTR [esp+16]
	mov	DWORD PTR [esp+36], eax
	jmp	L5
L7:
	mov	edx, DWORD PTR [esp+40]
	mov	eax, DWORD PTR [esp+36]
	add	eax, edx
	mov	DWORD PTR [esp+32], eax
	mov	eax, DWORD PTR [esp+44]
	cmp	eax, DWORD PTR [esp+32]
	jge	L6
	mov	eax, DWORD PTR [esp+32]
	mov	DWORD PTR [esp+44], eax
L6:
	sub	DWORD PTR [esp+36], 1
L5:
	mov	eax, DWORD PTR [esp+16]
	sub	eax, 1
	cmp	eax, DWORD PTR [esp+36]
	jle	L7
	sub	DWORD PTR [esp+40], 1
L4:
	mov	eax, DWORD PTR [esp+20]
	sub	eax, 1
	cmp	eax, DWORD PTR [esp+40]
	jle	L8
	mov	eax, DWORD PTR [esp+44]
	mov	DWORD PTR [esp+4], eax
	mov	DWORD PTR [esp], OFFSET FLAT:LC1
	call	_printf
	mov	eax, 0
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE10:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_scanf;	.scl	2;	.type	32;	.endef
	.def	_printf;	.scl	2;	.type	32;	.endef
