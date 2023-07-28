       SECTION .data
msg:   db 'Hello, Holberton', 0
fmt:   db "%s", 10, 0

       SECTION .text
       extern printf
       global main
main:
       mov   edi, fmt
       mov   edi, msg
       mov   eax, 0
       call  printf

       mov   eax, 0
       ret
