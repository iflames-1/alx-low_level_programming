section .data
    hello db 'Hello, Holberton', 0

section .text
    global main
    extern puts

main:
    push rdi
    lea rdi, [hello]
    call puts
    pop rdi
    mov eax, 0
    ret
