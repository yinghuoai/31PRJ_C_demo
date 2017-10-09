
void main()
{
	int* pint = (int*)0x2000;
	int data = 0;
	int count = 1;
	
	
	
	
	while(1)
	{

		data = *pint;
		
		printf(" %d. address: %x -> data: %x\n",count,pint,data);
		
		delay(1000);
		
		
	

		pint = (int*)data;
		
		if( (0xffff == pint)  )
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




