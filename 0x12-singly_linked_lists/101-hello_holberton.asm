section .data
    hello db "Hello, Holberton",10
    len equ $-hello

section .text
    global main

    extern printf

main:
    sub rsp, 8       ; align the stack

    mov rdi, hello   ; format string address
    mov eax, 0       ; number of xmm registers used for float args
    call printf      ; call printf function

    add rsp, 8       ; restore stack

    mov eax, 0       ; return 0
    ret
