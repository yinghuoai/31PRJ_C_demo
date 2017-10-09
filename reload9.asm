	ifndef	??version
?debug	macro
	endm
	endif
	?debug	S "shiyan.c"
_TEXT	segment	byte public 'CODE'
DGROUP	group	_DATA,_BSS
	assume	cs:_TEXT,ds:DGROUP,ss:_STACK
_TEXT	ends

_STACK segment
	db 128 dup(0)

_STACK ends





_DATA	segment word public 'DATA'
d@	label	byte
d@w	label	word
_DATA	ends
_BSS	segment word public 'BSS'
b@	label	byte
b@w	label	word
	?debug	C E93D70054B0873686979616E2E63
_BSS	ends
_TEXT	segment	byte public 'CODE'
;	?debug	L 2
_main	proc	near
	push	bp
	mov	bp,sp
	sub	sp,2
	push	si
	push	di
;	?debug	L 4
	mov	si,8192
;	?debug	L 5
	xor	di,di
;	?debug	L 6
	mov	word ptr [bp-2],1
	
	call  _reload9
	
	jmp	short @2
@4:
;	?debug	L 14
	mov	di,word ptr [si]
;	?debug	L 16
	push	di
	push	si
	push	word ptr [bp-2]
	mov	ax,offset DGROUP:s@
	push	ax
	call	near ptr _printf
	add	sp,8
;	?debug	L 18
	mov	ax,1000
	push	ax
	call	near ptr _delay
	pop	cx
;	?debug	L 23
	mov	si,di
;	?debug	L 25
	cmp	si,-1
	jne	@5
;	?debug	L 27
	jmp	short @3
@5:
;	?debug	L 33
	cmp	word ptr [bp-2],4000
	jle	@6
	jmp	short @1
@6:
;	?debug	L 42
	inc	word ptr [bp-2]
@2:
;	?debug	L 11
	jmp	short @4
@3:
@1:
;	?debug	L 49
	pop	di
	pop	si
	mov	sp,bp
	pop	bp
	ret	
_main	endp

_reload9	proc	near

	mov ax,_STACK
	mov ss,ax 
	mov sp,128 
	
	


	
	;;;;;;;;;;;;;;;;;;;;save the old cs,ip
	
	mov ax,0
	mov ds,ax 
	push ds:[9*4]
	pop ds:[200]
	push ds:[9*4+2]
	pop ds:[202]
	
	

	;;;;;;;;;;;;;;copy the code to 0:204 处
	push cs
	pop ds 
	
	mov ax,0 
	mov es,ax 
	
	
	mov si,offset int9begin
	mov di,204
	mov cx,offset int9end-int9begin
	cld 
	rep movsb 
	
	mov ax,0 
	mov ds,ax 
	
	;;;;;;;;;;;;;;;;;;;;;new int9
	cli
	mov word ptr ds:[9*4],204
	mov word ptr ds:[9*4+2],0
	
	sti
	
	
	mov ax,4c00h
	int 21h
	
	
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
	call dword ptr ds:[200]
	
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
	
	call _exit(0)	
	
	
	
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
	ret

_reload9	endp



_TEXT	ends
	?debug	C E9
_DATA	segment word public 'DATA'
s@	label	byte
	db	32
	db	37
	db	100
	db	46
	db	32
	db	97
	db	100
	db	100
	db	114
	db	101
	db	115
	db	115
	db	58
	db	32
	db	37
	db	120
	db	32
	db	45
	db	62
	db	32
	db	100
	db	97
	db	116
	db	97
	db	58
	db	32
	db	37
	db	120
	db	10
	db	0
_DATA	ends
_TEXT	segment	byte public 'CODE'
	extrn	_delay:near
	extrn	_printf:near
	extrn	_exit:near
	extrn	_tui:near
	
_TEXT	ends
	public	_main
	end
