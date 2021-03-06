integertostring:
	.equ ST_VALUE, 8
	.equ ST_BUFFER, 12

	.globl integer
	.type integer, @function

integer:
	#below 2 lines are fine
	pushl %ebp
	movl %esp, %ebp
	
	movl $0, %ecx
	
	movl ST_VALUE(%ebp), %eax
	
	movl $10, %edi

loop:
	movl $0, %edx
	divl %edi
	addl $0, %edx
	pushl %edx
	incl %ecx
	cmpl $0, %eax
	jne endloop
	jmp loop

endloop:
	movl ST_BUFFER(%ebp), %edx

cloop:
	popl %eax
	movb %al, (%edx)
	decl %ecx
	incl %edx
	cmpl $0, %ecx
	jne ecloop
	jmp cloop

ecloop:
	movl %ebp, %esp
	popl %ebp
	ret

