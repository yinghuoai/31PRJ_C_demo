int a;

void f1(void)
{
	a = 1;
	
}

void f2(void)
{
	a = 2;
	
}

void f3(void)
{
	a = 3;
	
}

main()
{
	void *p(void);
	p = f1;
	
	printf("f2() address:%lx\n",(char far*)p);
	
	
	printf("f2() address:%lx\n",(char far*)f2);
	
	printf("f3() address:%lx\n",(char far*)f3);
	
}



 