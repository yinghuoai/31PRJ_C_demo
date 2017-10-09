typedef struct{

	char* text;
	char key;
	int (*func)(int,int);


}ItemType;

void menu(ItemType* ,int);


char str1[20];
char str2[20];









void menu(ItemType* item ,int n)
{
	
	
	int a,b;
	char ch;
	
	for(a = 0;a < n;a++)
	{
		b =strlen(item[a].text);
		
		if(b > 20 || b <0)
		{
			printf("error");
			return;
			
			
		}
		
		printf("%s\n",item[a].text);
		
	}
	
	
	
	do
	{
	
		ch = getch();
		
		for(a = 0;item[a].key != ch && a < n ;a++);
		
	
	}while(a == n);
	
	
	
	
	
	gets(str1);
	
	
	
	gets(str2);
	

	
	printf("--------------------\n");

	


    	
	
	printf("%d",item[a].func(atoi(str1),atoi(str2)) );
	
	
}

	




















