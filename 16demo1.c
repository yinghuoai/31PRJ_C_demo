#define screen ( (char far*)0xb8000000  )


typedef struct c
{
	char chr;
	char color;
	void (*put)(struct c*,int,int);
	

}ch;


void f(ch*,int,int);

main()
{
	int n;
	ch a;
	
	a.chr = 'c';
	a.color = 2;
	a.put = f;
	
	a.put(&a,10,40);
	
	
}


void f(ch* p,int row,int col)
{
	screen[(row - 1)*160 + (col - 1)*2] = p->chr;
	
	screen[(row - 1)*160 + (col - 1)*2 + 1] = p->color;

	
	
}
















