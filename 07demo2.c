#include <stdlib.h>

void tui();

void main()
{
	int* pint = (int*)0x2000;
	int data = 0;
	int count = 1;
	
	reload9();
	
	
	while(1)
	{
		
		
		data = *pint;
		
		printf(" %d. address: %x -> data: %x\n",count,pint,data);
		
		delay(1000);
		
		
	

		pint = (int*)data;
		
		if( ((int*)0xffff == pint)  )
		{
			break;
			
		}
		

		
		if(count > 4000)
		{
			
			return;
			
		}
		

			
		count++;

		
	}	
		
		
		
		


}

void tui()
{
	
	*(char far*)(0xb8000000+160*13+80) = 'c';
	exit(0);
	
}
	



