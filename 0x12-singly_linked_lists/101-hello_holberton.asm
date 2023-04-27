section .data
    ; Define the message to be printed and the format string
    hello db 'Hello, Holberton', 0
    fmt db '%s\n', 0

section .text
    global main

extern printf    ; Declare the printf function as an external symbol

main:
    ; Set up the stack frame
    push rbp     ; Save the current value of rbp
    mov rbp, rsp ; Set rbp to the current value of rsp

    ; Call printf with the appropriate arguments
    mov rdi, fmt ; Load the address of fmt into rdi
    mov rsi, hello ; Load the address of hello into rsi
    xor rax, rax ; Clear rax, which is used to store the return value of printf
    call printf ; Call printf with the given arguments

    ; Clean up the stack and exit
    mov rsp, rbp ; Restore rsp to its original value
    pop rbp      ; Restore rbp to its original value
    xor eax, eax ; Set the return value to 0
    ret          ; Return from the main function
