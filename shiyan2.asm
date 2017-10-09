public _reload9

_text segment byte public 'code'
assume cs:_text
extrn _tui:far

_reload9 proc near
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

int9begin:
	push ax
	push bx
	push cx
	push es
	push dx

	in al, 60h
 
	pushf
	call dword ptr cs:[200h]
	
	cmp al, 10h				
	jne cmpa
	
	mov dx, cs:[200h]	;如果判断是q的扫描码的话，恢复中断并且退出
	mov cs:[9 * 4], dx
	mov dx, cs:[202h]
	mov cs:[9 * 4 + 2], dx

	
	mov ax, 4c00h
	int 21h 
	
cmpa:
	cmp al, 1eh
	jne int9ret
	
	mov dx, cs:[200h]	
	mov cs:[9 * 4], dx
	mov dx, cs:[202h]
	mov cs:[9 * 4 + 2], dx

	pop dx
	pop es
	pop cx
	pop bx
	pop ax
	
	mov ax,4c00h
	int 21h

int9ret:
	pop dx
	pop es
	pop cx
	pop bx
	pop ax
	iret
int9end:nop

_reload9 endp
_text ends
	End