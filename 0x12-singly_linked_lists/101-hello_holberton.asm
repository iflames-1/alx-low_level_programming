section .data
    format db 'Hello, Holberton', 10, 0  ; 10 is the ASCII code for newline

section .text
    global main
    extern printf

main:
    push rdi
    lea rdi, [format]
    call printf
    pop rdi
    mov eax, 0
    ret
