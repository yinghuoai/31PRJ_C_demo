
typedef struct
{
	int num;
	unsigned char c ;
	unsigned char os;
	unsigned char masm;
	char name[20];
	
	
}stu;





int main()
{
	stu astu = {1,'c','o','m',"hello"};
	int i = 0;
	int a = 0;
	
	
	
	stu* pstu = &astu;
	
	char* pchar1 = (char*)(&(astu.num));
	char* pchar2 = (char*)(&(astu.c));
	char* pchar3 = (char*)(&(astu.os));
	char* pchar4 = (char*)(&(astu.masm));
	char* pchar5 = (char*)(&(astu.name));
	
	
	
	
	printf("sizeof(stu) = %d,address(astu) = %lx\n",sizeof(stu),(char far*)(&astu));

	
	
	printf("sizeof(astu.num) = %d,address(astu.num) = %lx\n",sizeof(astu.num),(char far*)(&(astu.num)));
	printf("sizeof(astu.c) = %d,address(astu.c) = %lx\n",sizeof(astu.c),(char far*)(&(astu.c)));
	printf("sizeof(astu.os) = %d,address(astu.os) = %lx\n",sizeof(astu.os),(char far*)(&(astu.os)));
	printf("sizeof(astu.masm) = %d,address(astu.masm) = %lx\n",sizeof(astu.masm),(char far*)(&(astu.masm)));
	printf("sizeof(astu.name) = %d,address(astu.name) = %lx\n",sizeof(astu.name),(char far*)(&(astu.name)));

	
	
	
	
	printf("compare.........................................  \n");

	

	
	printf("astu->num: \n");
	
	for(i = 0; i < sizeof(astu.num) ; i++)
	{
		
		printf("%d-- address: %lx , value: %d\n",(i + 1),(char far*)(pchar1 + i),*(pchar1 + i));
		
		
	}
	

	
	
	
	printf("astu->c: \n");
	
	for(i = 0; i < sizeof(astu.c) ; i++)
	{
		
		printf("%d-- address: %lx , value: %d\n",(i + 1),(char far*)(pchar2 + i),*(pchar2 + i));
		
		
	}
	

	
	printf("astu->os: \n");
	
	for(i = 0; i < sizeof(astu.os) ; i++)
	{
		
		printf("%d-- address: %lx , value: %d\n",(i + 1),(char far*)(pchar3 + i),*(pchar3 + i));
		
		
	}
	
	
	scanf("pause",&a);
	
	printf("astu->masm: \n");
	
	for(i = 0; i < sizeof(astu.masm) ; i++)
	{
		
		printf("%d-- address: %lx , value: %d\n",(i + 1),(char far*)(pchar4 + i),*(pchar4 + i));
		
		
	}
	

	
	
	printf("astu->name: \n");
	
	for(i = 0; i < sizeof(astu.name) ; i++)
	{
		
		printf("%d-- address: %lx , value: %d\n",(i + 1),(char far*)(pchar5 + i),*(pchar5 + i));
		
		
	}
	
	
	
	

	
	return 0;
}