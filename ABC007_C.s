	.file	"ABC007_C.c"
	.intel_syntax noprefix
	.comm	_q1, 4, 2
	.comm	_q2, 4, 2
	.comm	_ny, 4, 2
	.comm	_nx, 4, 2
	.comm	_R, 4, 2
	.comm	_C, 4, 2
	.comm	_Sy, 4, 2
	.comm	_Sx, 4, 2
	.comm	_gy, 4, 2
	.comm	_gx, 4, 2
	.comm	_v, 10404, 5
	.globl	_head
	.bss
	.align 4
_head:
	.space 4
	.globl	_tail
	.data
	.align 4
_tail:
	.long	1
	.comm	_queue1, 12000, 5
	.comm	_queue2, 12000, 5
	.comm	_count, 10000, 5
	.comm	_c, 2601, 5
	.globl	_v1
	.align 4
_v1:
	.long	1
	.long	0
	.long	-1
	.long	0
	.globl	_v2
	.align 4
_v2:
	.long	0
	.long	1
	.long	0
	.long	-1
	.section .rdata,"dr"
LC0:
	.ascii "%d\12\0"
	.text
	.globl	_check
	.def	_check;	.scl	2;	.type	32;	.endef
_check:
LFB10:
	.cfi_startproc
	push	ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	mov	ebp, esp
	.cfi_def_cfa_register 5
	sub	esp, 24
	mov	eax, DWORD PTR _C
	cmp	DWORD PTR [ebp+12], eax
	jge	L2
	mov	eax, DWORD PTR _R
	cmp	DWORD PTR [ebp+8], eax
	jge	L2
	cmp	DWORD PTR [ebp+12], 0
	js	L2
	cmp	DWORD PTR [ebp+8], 0
	js	L2
	mov	eax, DWORD PTR [ebp+8]
	imul	edx, eax, 51
	mov	eax, DWORD PTR [ebp+12]
	add	eax, edx
	mov	eax, DWORD PTR _v[0+eax*4]
	test	eax, eax
	jne	L2
	mov	eax, DWORD PTR [ebp+8]
	imul	edx, eax, 51
	mov	eax, DWORD PTR [ebp+12]
	add	eax, edx
	add	eax, OFFSET FLAT:_c
	movzx	eax, BYTE PTR [eax]
	cmp	al, 46
	jne	L2
	mov	edx, DWORD PTR _q1
	mov	eax, DWORD PTR _q2
	imul	edx, edx, 50
	add	eax, edx
	mov	eax, DWORD PTR _count[0+eax*4]
	lea	edx, [eax+1]
	mov	eax, DWORD PTR [ebp+8]
	imul	ecx, eax, 50
	mov	eax, DWORD PTR [ebp+12]
	add	eax, ecx
	mov	DWORD PTR _count[0+eax*4], edx
	mov	eax, DWORD PTR [ebp+8]
	imul	edx, eax, 51
	mov	eax, DWORD PTR [ebp+12]
	add	eax, edx
	mov	DWORD PTR _v[0+eax*4], 1
	mov	eax, DWORD PTR _gy
	sub	eax, 1
	cmp	eax, DWORD PTR [ebp+8]
	jne	L3
	mov	eax, DWORD PTR _gx
	sub	eax, 1
	cmp	eax, DWORD PTR [ebp+12]
	jne	L3
	mov	eax, DWORD PTR [ebp+8]
	imul	edx, eax, 50
	mov	eax, DWORD PTR [ebp+12]
	add	eax, edx
	mov	eax, DWORD PTR _count[0+eax*4]
	mov	DWORD PTR [esp+4], eax
	mov	DWORD PTR [esp], OFFSET FLAT:LC0
	call	_printf
	mov	eax, 0
	jmp	L4
L3:
	mov	eax, DWORD PTR _tail
	mov	edx, DWORD PTR [ebp+8]
	mov	DWORD PTR _queue1[0+eax*4], edx
	mov	eax, DWORD PTR _tail
	mov	edx, DWORD PTR [ebp+12]
	mov	DWORD PTR _queue2[0+eax*4], edx
	mov	eax, DWORD PTR _tail
	add	eax, 1
	mov	DWORD PTR _tail, eax
L2:
	mov	eax, 0
L4:
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE10:
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC1:
	.ascii "%d%d\0"
LC2:
	.ascii "%s\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB11:
	.cfi_startproc
	push	ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	mov	ebp, esp
	.cfi_def_cfa_register 5
	and	esp, -16
	sub	esp, 32
	call	___main
	mov	DWORD PTR [esp+8], OFFSET FLAT:_C
	mov	DWORD PTR [esp+4], OFFSET FLAT:_R
	mov	DWORD PTR [esp], OFFSET FLAT:LC1
	call	_scanf
	mov	DWORD PTR [esp+8], OFFSET FLAT:_Sx
	mov	DWORD PTR [esp+4], OFFSET FLAT:_Sy
	mov	DWORD PTR [esp], OFFSET FLAT:LC1
	call	_scanf
	mov	DWORD PTR [esp+8], OFFSET FLAT:_gx
	mov	DWORD PTR [esp+4], OFFSET FLAT:_gy
	mov	DWORD PTR [esp], OFFSET FLAT:LC1
	call	_scanf
	mov	DWORD PTR [esp+28], 0
	jmp	L6
L7:
	mov	eax, DWORD PTR [esp+28]
	imul	eax, eax, 51
	add	eax, OFFSET FLAT:_c
	mov	DWORD PTR [esp+4], eax
	mov	DWORD PTR [esp], OFFSET FLAT:LC2
	call	_scanf
	add	DWORD PTR [esp+28], 1
L6:
	mov	eax, DWORD PTR _R
	cmp	DWORD PTR [esp+28], eax
	jl	L7
	mov	DWORD PTR [esp+24], 0
	jmp	L8
L11:
	mov	DWORD PTR [esp+20], 0
	jmp	L9
L10:
	mov	eax, DWORD PTR [esp+24]
	imul	edx, eax, 51
	mov	eax, DWORD PTR [esp+20]
	add	eax, edx
	mov	DWORD PTR _v[0+eax*4], 0
	add	DWORD PTR [esp+20], 1
L9:
	mov	eax, DWORD PTR _C
	cmp	DWORD PTR [esp+20], eax
	jl	L10
	add	DWORD PTR [esp+24], 1
L8:
	mov	eax, DWORD PTR _R
	cmp	DWORD PTR [esp+24], eax
	jl	L11
	mov	eax, DWORD PTR _Sy
	lea	ecx, [eax-1]
	mov	eax, DWORD PTR _Sx
	lea	edx, [eax-1]
	imul	eax, ecx, 51
	add	eax, edx
	mov	DWORD PTR _v[0+eax*4], 1
	mov	eax, DWORD PTR _Sy
	sub	eax, 1
	mov	DWORD PTR _queue1, eax
	mov	eax, DWORD PTR _Sx
	sub	eax, 1
	mov	DWORD PTR _queue2, eax
	mov	eax, DWORD PTR _Sy
	lea	ecx, [eax-1]
	mov	eax, DWORD PTR _Sx
	lea	edx, [eax-1]
	imul	eax, ecx, 50
	add	eax, edx
	mov	DWORD PTR _count[0+eax*4], 0
	jmp	L12
L15:
	mov	eax, DWORD PTR _head
	mov	eax, DWORD PTR _queue1[0+eax*4]
	mov	DWORD PTR _q1, eax
	mov	eax, DWORD PTR _head
	mov	eax, DWORD PTR _queue2[0+eax*4]
	mov	DWORD PTR _q2, eax
	mov	eax, DWORD PTR _head
	add	eax, 1
	mov	DWORD PTR _head, eax
	mov	DWORD PTR [esp+16], 0
	jmp	L13
L14:
	mov	eax, DWORD PTR [esp+16]
	mov	edx, DWORD PTR _v1[0+eax*4]
	mov	eax, DWORD PTR _q1
	add	eax, edx
	mov	DWORD PTR _ny, eax
	mov	eax, DWORD PTR [esp+16]
	mov	edx, DWORD PTR _v2[0+eax*4]
	mov	eax, DWORD PTR _q2
	add	eax, edx
	mov	DWORD PTR _nx, eax
	mov	edx, DWORD PTR _nx
	mov	eax, DWORD PTR _ny
	mov	DWORD PTR [esp+4], edx
	mov	DWORD PTR [esp], eax
	call	_check
	add	DWORD PTR [esp+16], 1
L13:
	cmp	DWORD PTR [esp+16], 3
	jle	L14
L12:
	mov	edx, DWORD PTR _head
	mov	eax, DWORD PTR _tail
	cmp	edx, eax
	jne	L15
	mov	eax, 0
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE11:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_printf;	.scl	2;	.type	32;	.endef
	.def	_scanf;	.scl	2;	.type	32;	.endef
