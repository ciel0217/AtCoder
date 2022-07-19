	.file	"ABC124_B.c"
	.intel_syntax noprefix
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "%d\0"
LC1:
	.ascii "%d\12\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB10:
	.cfi_startproc
	lea	ecx, [esp+4]
	.cfi_def_cfa 1, 0
	and	esp, -16
	push	DWORD PTR [ecx-4]
	push	ebp
	.cfi_escape 0x10,0x5,0x2,0x75,0
	mov	ebp, esp
	push	ebx
	push	ecx
	.cfi_escape 0xf,0x3,0x75,0x78,0x6
	.cfi_escape 0x10,0x3,0x2,0x75,0x7c
	sub	esp, 48
	call	___main
	mov	eax, esp
	mov	ebx, eax
	mov	DWORD PTR [ebp-12], 1
	mov	DWORD PTR [ebp-16], 0
	lea	eax, [ebp-40]
	mov	DWORD PTR [esp+4], eax
	mov	DWORD PTR [esp], OFFSET FLAT:LC0
	call	_scanf
	mov	eax, DWORD PTR [ebp-40]
	lea	edx, [eax-1]
	mov	DWORD PTR [ebp-32], edx
	sal	eax, 2
	lea	edx, [eax+3]
	mov	eax, 16
	sub	eax, 1
	add	eax, edx
	mov	ecx, 16
	mov	edx, 0
	div	ecx
	imul	eax, eax, 16
	call	___chkstk_ms
	sub	esp, eax
	lea	eax, [esp+8]
	add	eax, 3
	shr	eax, 2
	sal	eax, 2
	mov	DWORD PTR [ebp-36], eax
	mov	DWORD PTR [ebp-20], 0
	jmp	L2
L3:
	mov	eax, DWORD PTR [ebp-20]
	lea	edx, [0+eax*4]
	mov	eax, DWORD PTR [ebp-36]
	add	eax, edx
	mov	DWORD PTR [esp+4], eax
	mov	DWORD PTR [esp], OFFSET FLAT:LC0
	call	_scanf
	add	DWORD PTR [ebp-20], 1
L2:
	mov	eax, DWORD PTR [ebp-40]
	cmp	DWORD PTR [ebp-20], eax
	jl	L3
	mov	DWORD PTR [ebp-24], 1
	jmp	L4
L11:
	mov	DWORD PTR [ebp-16], 0
	mov	DWORD PTR [ebp-28], 0
	jmp	L5
L10:
	mov	eax, DWORD PTR [ebp-36]
	mov	edx, DWORD PTR [ebp-24]
	mov	ecx, DWORD PTR [eax+edx*4]
	mov	eax, DWORD PTR [ebp-36]
	mov	edx, DWORD PTR [ebp-28]
	mov	eax, DWORD PTR [eax+edx*4]
	cmp	ecx, eax
	jl	L13
	add	DWORD PTR [ebp-16], 1
	mov	eax, DWORD PTR [ebp-16]
	cmp	eax, DWORD PTR [ebp-24]
	jne	L9
	add	DWORD PTR [ebp-12], 1
L9:
	add	DWORD PTR [ebp-28], 1
L5:
	mov	eax, DWORD PTR [ebp-28]
	cmp	eax, DWORD PTR [ebp-24]
	jl	L10
	jmp	L8
L13:
	nop
L8:
	add	DWORD PTR [ebp-24], 1
L4:
	mov	eax, DWORD PTR [ebp-40]
	cmp	DWORD PTR [ebp-24], eax
	jl	L11
	mov	eax, DWORD PTR [ebp-12]
	mov	DWORD PTR [esp+4], eax
	mov	DWORD PTR [esp], OFFSET FLAT:LC1
	call	_printf
	mov	eax, 0
	mov	esp, ebx
	lea	esp, [ebp-8]
	pop	ecx
	.cfi_restore 1
	.cfi_def_cfa 1, 0
	pop	ebx
	.cfi_restore 3
	pop	ebp
	.cfi_restore 5
	lea	esp, [ecx-4]
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE10:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_scanf;	.scl	2;	.type	32;	.endef
	.def	_printf;	.scl	2;	.type	32;	.endef
