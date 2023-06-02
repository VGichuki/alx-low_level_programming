msg: db "Hello, Holberton", 0
format: db "%s", 10, 0

extern printf
global main
main:
	mov edi, format
	mov esi, msg
	mov eax, 0
	call printf

	ret

