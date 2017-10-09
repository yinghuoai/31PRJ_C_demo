public _reload9

_text segment byte public 'code'
assume cs:_text



_reload9	proc	near

	push ds
	push ax
	push si
	push di 
	push cx 
	push es 
	
	push cs
	pop ds

	mov ax, 0
	mov es, ax

	mov si, offset int9begin
	mov di, 204h
	mov cx, offset int9end - offset int9begin
	cld
	rep movsb

	push es:[9 * 4]
	pop es:[200h]
	push es:[9 * 4 + 2]
	pop es:[202h]

	cli
	mov word ptr es:[9 * 4], 204h
	mov word ptr es:[9 * 4 + 2], 0
	sti
	
	pop es 
	pop cx
	pop di 
	pop si 
	pop ax 
	pop ds 
	ret
	
	
	;;;;;what is int9
	int9begin:
	
	push ax 
	push es 
	push si 
	push di 
	push cx 
	
	
	
	;;
	in al,60h
	
	mov bx,0 
	mov ds,bx
	
	pushf 
	call dword ptr cs:[200h]
	
	mov ah,0  
	int 16h 
	
	cmp ah,10h
	je jieshu
	
	cmp ah,1eh
	je jieshu2
	

	


	jmp jieshu3
	

	
	
	
	
	
	jieshu:

	
	

	
	pop cx 
	pop di 
	pop si 
	pop es 
	pop ax 
	
	mov ax, 4c00h
	int 21h 
	
	
	jieshu2:
	
	
	pop cx 
	pop di 
	pop si 
	pop es 
	pop ax 
	
	add sp,6h
	retf
	
	
	
	
	jieshu3:
	
	
	
	
	pop cx 
	pop di 
	pop si 
	pop es 
	pop ax 
	iret
	
	
	int9end:
	nop 
	
_reload9	endp

_text ends
_text	segment	byte public 'CODE'

	extrn	_tui:near
	
_text	ends


	End