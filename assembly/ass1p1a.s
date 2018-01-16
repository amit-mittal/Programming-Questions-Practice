	.file	"ass1p1a.c"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$64, %esp
	movl	$3, -52(%ebp)
	movl	$67, -48(%ebp)
	movl	$34, -44(%ebp)
	movl	$222, -40(%ebp)
	movl	$45, -36(%ebp)
	movl	$75, -32(%ebp)
	movl	$54, -28(%ebp)
	movl	$34, -24(%ebp)
	movl	$44, -20(%ebp)
	movl	$33, -16(%ebp)
	movl	$22, -12(%ebp)
	movl	$11, -8(%ebp)
	movl	$66, -4(%ebp)
	movl	-52(%ebp), %eax
	movl	%eax, -56(%ebp)
	movl	$0, -60(%ebp)
	jmp	.L2
.L4:
	movl	-60(%ebp), %eax
	movl	-52(%ebp,%eax,4), %eax
	cmpl	-56(%ebp), %eax
	jle	.L3
	movl	-60(%ebp), %eax
	movl	-52(%ebp,%eax,4), %eax
	movl	%eax, -56(%ebp)
.L3:
	addl	$1, -60(%ebp)
.L2:
	cmpl	$12, -60(%ebp)
	jle	.L4
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu/Linaro 4.7.2-2ubuntu1) 4.7.2"
	.section	.note.GNU-stack,"",@progbits
