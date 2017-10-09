	int aint = 0;
	long along = 1;
	double adouble = 2.0;
	int i = 0;
	char* pchar1 = (char*)(&aint);
	char* pchar2 = (char*)(&along);
	char* pchar3 = (char*)(&adouble);
	
	
int main()
{

	
	
	printf("sizeof(int) = %d,address(aint) = %lx\n",sizeof(int),(char far*)(&aint));
	printf("sizeof(long) = %d,address(along) = %lx\n",sizeof(long),(char far*)(&along));
	printf("sizeof(double) = %d,address(adouble) = %lx\n",sizeof(double),(char far*)(&adouble));
	
	printf("compare.........................................  \n");


	
	
	printf("aint: \n");
	
	for(i = 0; i < sizeof(int) ; i++)
	{
		
		printf("%d-- address: %lx , value: %d\n",(i + 1),(char far*)(pchar1 + i),*(pchar1 + i));
		
		
	}


	

	
	printf("along: \n");
	
	for(i = 0; i < sizeof(long) ; i++)
	{
		
		printf("%d-- address: %lx , value: %d\n",(i + 1),(char far*)(pchar2 + i),*(pchar2 + i));
		
		
	}


	

	
	printf("adouble: \n");
	
	for(i = 0; i < sizeof(double) ; i++)
	{
		
		printf("%d-- address: %lx , value: %d\n",(i + 1),(char far*)(pchar3 + i),*(pchar3 + i));
		
		
	}
	
	
	
	
	
	
	
	
	
	return 0;
}