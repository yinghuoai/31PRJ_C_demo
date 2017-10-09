
void main()
{
	int* pint = 0x2000;
	int data = 0;
	int count = 1;
	
	
	

	while(1)
	{
		data = *pint;
		
		printf(" %d. address: %x -> data: %x\n",count,pint,data);
		
		pint = (int*)data;
		
		if( (0xffff == pint)  )
		{
			break;
			
		}
		
		if( kbhit() )
		{
				if('q' == getch())
			{
				
				break;
				
			}
			
			
		}
		
		if(count > 4000)
		{
			
			return;
			
		}
		

			
		count++;

		
	}	
		


}