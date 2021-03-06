.equ LINUX_SYSCALL, 0x80
.equ SYS_OPEN, 5
.equ SYS_WRITE, 4
.equ SYS_READ, 3
.equ SYS_CLOSE, 6
.equ SYS_EXIT, 1
.equ STDOUT, 1
tmp_buffer:
.ascii "\0\0\0\0\0\0\0\0\0\0\0"
.section .text
.globl _start
_start:
movl %esp, %ebp
#Storage for the result
pushl $tmp_buffer
#Number to convert
pushl $824
call integer
addl $8, %esp
#Get the character count for our system call
pushl $tmp_buffer
call count_chars
addl $4, %esp
#The count goes in %edx for SYS_WRITE
movl %eax, %edx
#Make the system call
movl $SYS_WRITE, %eax
movl $STDOUT, %ebx
movl $tmp_buffer, %ecx
int $LINUX_SYSCALL
#Write a carriage return
pushl $STDOUT
call write_newline
#Exit
movl $SYS_EXIT, %eax
movl $0, %ebx
int $LINUX_SYSCALL
