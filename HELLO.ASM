	ifndef	??version
?debug	macro
	endm
	endif
	?debug	S "hello.c"
_TEXT	segment	byte public 'CODE'
DGROUP	group	_DATA,_BSS
	assume	cs:_TEXT,ds:DGROUP,ss:DGROUP
_TEXT	ends
_DATA	segment word public 'DATA'
d@	label	byte
d@w	label	word
_DATA	ends
_BSS	segment word public 'BSS'
b@	label	byte
b@w	label	word
	?debug	C E96B45C94A0768656C6C6F2E63
_BSS	ends
_TEXT	segment	byte public 'CODE'
;	?debug	L 1
_main	proc	near
;	?debug	L 3
	mov	ax,offset DGROUP:s@
	push	ax
	call	near ptr _printf
	pop	cx
@1:
;	?debug	L 6
	ret	
_main	endp
_TEXT	ends
	?debug	C E9
_DATA	segment word public 'DATA'
s@	label	byte
	db	104
	db	101
	db	108
	db	108
	db	111
	db	32
	db	119
	db	111
	db	114
	db	108
	db	100
	db	33
	db	10
	db	0
_DATA	ends
_TEXT	segment	byte public 'CODE'
	extrn	_printf:near
_TEXT	ends
	public	_main
	end
