

int f1(int,int);
int f2(int,int);
int f( int (*)(int ,int),int (*)(int ,int) );




void main(void)
{
	int value = 0;
	int (*(p[2]))(int ,int);
	
	p[0] = f1;
	p[1] = f2;


	
	value = f( (p[0]),(p[1])  );


	printf("value = %d",value);


}


int f1(int a,int b)
{
	
	return a+b;
	
}


int f2(int a,int b)
{
	
	return a*b;
	
	
}


int f(  int (*a)(int ,int ), int (*b)(int ,int)  )
{
	
	
	
	return a(1,2)+b(8,4);
	

	
}








