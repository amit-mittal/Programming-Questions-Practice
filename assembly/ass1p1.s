.section .data
.LC0:
	.string	"The maximum value is %d\n"

d: 
.long 3,67,34,222,45,75,54,34,44,33,22,11,66
.section .text
.globl main

main:
	movl $0, %edi 
	movl d(,%edi,4), %eax 
	movl %eax, %ebx 

start_loop:
	incl %edi 
	cmpl $12, %edi 
	jnl loop_exit
	movl d(,%edi,4), %eax
	cmpl %ebx, %eax 
	jle start_loop 
	movl %eax, %ebx 
	jmp start_loop 

loop_exit:
	pushl %ebx
	pushl $.LC0
	call printf
	popl %eax
	popl %eax
