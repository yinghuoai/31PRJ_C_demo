#include <stdio.h>
main()
{
	
	char name[5];
	
	printf("what's your name?\n");
	
	fgets(name,sizeof(name),stdin);
	
	printf("hello %s",name);
	
	
}

