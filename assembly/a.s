.section .data
d: 
.long 3,67,34,222,45,75,54,34,44,33,22,11,66
.section .text
.globl _start
_start:
movl $0, %edi 
movl d(,%edi,4), %eax 
movl %eax, %ebx 
start_loop: 
cmpl $0, %eax 
jle loop_exit
incl %edi 
movl d(,%edi,4), %eax
cmpl %ebx, %eax 
je start_loop 
movl %eax, %ebx 
jmp start_loop 
loop_exit:
