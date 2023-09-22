extern printf					; the c function to be called

		section .data			; data section, initialise variable

msg:		db "Hello, Holberton", 0 	; NULL-terminated string to print
fmt:		db "%s", 10, 0			;printf format for string

		section .text

			global _main		;standard gcc entry point

_main:						; programe level for the entry point
			push	rbp		; set up stack frame, next to align

			mov 	rdi,fmt
			mov	rsi,msg
			mov 	rax, 0		;
			call	printf		; call a c function

			pop 	rbp		; retore the stack

			mov	rax,0		; no error or the value will be returned
			ret			; return
