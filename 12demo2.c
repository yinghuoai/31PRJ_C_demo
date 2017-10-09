char* code = "+-*/";

int add(int a,int b)
{
	return a+b;
}

int sub(int a,int b)
{
	return a-b;
	
}

int mul(int a,int b)
{
	return a*b;
}

int div(int a,int b)
{
	return a/b;
	
}


int (*func[4])(int,int) = {add,sub,mul,div};



main()
{

	char a[20];
	char b[20];
	char ch;
	
	int n;
	
	gets(a);
	
	printf("%s\n",a);
	
	printf("%c\n",ch = getch());
	
	gets(b);
	
	printf("%s\n",b);
	
	
	for(n = 0;code[n] && code[n] != ch;n++ );
	
	
	if(!code[n] )
	{
		printf("error!");
		return;
		
	}
	
	printf("--------------------\n");
	
	printf("%d",func[n](atoi(a),atoi(b)));


}


