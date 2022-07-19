	.file	"zzz.s"
	.intel_syntax noprefix
	.text
	.globl	_zzz
	.def	_zzz;	.scl	2;	.type	32;	.endef
_zzz:
	push	ebp
	mov	ebp, esp
	mov	eax, 777
	pop	ebp
	ret
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
