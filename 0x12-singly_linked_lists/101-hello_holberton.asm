section .data
    hello db 'Hello, Holberton', 0

section .text
    global main
    extern printf
	extern putchar

main:
    push rbp
    mov rbp, rsp

    mov rdi, hello
    xor rax, rax
    call printf

    mov rdi, 10
    call putchar

    mov rax, 0
    pop rbp
    ret