

#include <stdarg.h>

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
	
	va_list pp;
	int* ptemp;
	unsigned int i;
	char ** pa;
	pa = &p;
	
	ptemp = (int*)(&p);
	
	pp = ...;
	
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
			printf(" ptemp address is : %p \n",ptemp);
			
			printf("compare............\n");
		
			printf(" pp address is : %p  \n",pp);
		
			printf(" pa address is : %p   \n",pa);
		
			printf("compare............\n");
	
			
			
			
			ptemp++;
			
			
			
			
			
			
			
			
		}
		

		
		
	}
	
		
		

	
	
	
	
}