void showstr(char *,...);

char *p1 = "This is a c program.";
char *p2 = "Welcome to c!";
char *p3 = "Hello world!";


main()
{
	
	showstr(p1,p2,p3,0);
	

}



void showstr(char* p,...)
{
	int* ptemp;
	unsigned int i;
	ptemp = (int*)(&p);
	
	while(1)
	{
		
		if( 0 == *ptemp )
		{
			break;
			
		}
		else
		{
			for(i = 0; i < strlen(*ptemp) ; i++)
			{
				printf("\33[1m\033[47;36m%c\033[0m",*( (char*)(*ptemp) + i)  );
				
				
				
				
			}
			printf("\n");
			
			
			ptemp++;
			
			
		}
		
		
		
		
		
		
	}
	
	
	
	
	
	
	
	
}