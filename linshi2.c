int main()
{
	
	int ret,lcan1,lcan2;
	
	char lsfunc[10];
	

	
	printf("please input function name , can1  and can2 : \n");
	
	scanf("%s %d %d",lsfunc,&lcan1,&lcan2);
	

	

	
	if( 0 == strcmp(lsfunc,"add") )
	{
		
		ret = add(lcan1,lcan2);
		
	}else if( 0 == strcmp(lsfunc,"sub") )
	{
		
		ret = sub(lcan1,lcan2);
		
	}else
	{
		ret = 1;
		
	}
	
	
	
	
	
	printf("result is : %d\n",ret);
	
	return 0;
	
}