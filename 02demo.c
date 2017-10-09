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
	printf("main() pian:%x\n",main);
	
	printf("f1() duan:%x,pian:%x\n",_CS,f1);
	
	printf("f2() duan:%x,pian:%x\n",_CS,f2);
	
	printf("f3() duan:%x,pian:%x\n",_CS,f3);
	
}



