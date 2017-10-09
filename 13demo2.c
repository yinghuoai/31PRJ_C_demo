#include "13demo2.h"




char text1[20] = "(1)  add";
char text2[20] = "(2)  sub";
char text3[20] = "(3)  mul";
char text4[20] = "(4)  div";


int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);





ItemType item[]={
					text1,'1',add,
					text2,'2',sub,
					text3,'3',mul,
					text4,'4',div,
	
};





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




main()
{
	menu(item,4);
	
	
}





















