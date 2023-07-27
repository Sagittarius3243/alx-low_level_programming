section .data
    hello_msg db 'Hello, Holberton',0   ; Null-terminated string for the message

section .text
    global main

main:
    ; Call printf with the hello_msg string as an argument
    mov rdi, hello_msg      ; Load the address of the format string
    xor rax, rax            ; Clear RAX register for the printf syscall
    call printf             ; Call the printf function

    ; Exit the program
    xor edi, edi            ; Clear the exit status code (0)
    mov eax, 60             ; syscall number for exit
    syscall

section .bss
    ; Reserve space for printf's arguments
    hello_msg resb 20       ; Space for the message string

section .hidden
    ; Define the printf function as a hidden symbol (linker requirement)
    extern printf
