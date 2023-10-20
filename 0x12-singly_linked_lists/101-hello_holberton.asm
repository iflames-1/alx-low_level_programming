section .data
    hello db "Hello, Holberton",10 ; The message and a newline character
    format db "%s",0             ; The format string for printf

section .text
    global _start

_start:
    ; Call printf
    mov rdi, format
    mov rsi, hello
    call printf

    ; Exit the program
    mov rax, 60         ; syscall number for exit
    xor rdi, rdi        ; exit status, 0 in this case
    syscall
