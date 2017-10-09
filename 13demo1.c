#include "13demo1.h"

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
	gongxing();
	printf("%d",func[n](atoi(a),atoi(b)));

}


