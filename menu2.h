typedef struct{

	char* text;
	char key;
	void (*func)();


}ItemType;

void menu(ItemType* ,int);

void menu(ItemType* item,int n)
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
	
	
	do{
		
		ch = getch();
		
		for(a = 0;item[a].key != ch && a < n ;a++);
		
		
		
		
	}while(a == n);
	
	item[a].func();
	
	
}





