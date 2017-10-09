
struct stu{
	
	unsigned char c;
	unsigned char os;
	unsigned char masm;
	unsigned char java;
	
	struct stu far* next;
	
	
};

struct stu a[375];
unsigned int sum[375];
unsigned int index[375];
unsigned int count = 0;

void copy();
void select();
void connect();
void print();


void copy()
{
	
	unsigned int i,jia = 0;
	
	for(i = 0;i < 375;i++ )
	{
		
		a[i].c = *(unsigned char far*)(0x0 + jia + 0);
		a[i].os = *(unsigned char far*)(0x0 + jia + 1);
		a[i].masm = *(unsigned char far*)(0x0 + jia + 2);
		a[i].java =  *(unsigned char far*)(0x0 + jia + 3);		
		

		
		jia += 8;
		
	}
	
	
	
	
	
}

void select()
{
	
	unsigned int i,j = 0;
	
	for(i = 0;i < 375;i++ )
	{
		sum[i] = a[i].c + a[i].os + a[i].masm + a[i].java;

		if(  ( sum[i] > 200 ) && ( sum[i] < 400 )  )
		{
			
			index[j] = i;
			j++;
			
		}
	
	
	}
	
	count = j;
	
}




void connect()
{
	
	unsigned int i,now,last;
	
	for(i = 0;i < (count - 1);i++ )
	{

		now = index[i];
		last = index[i + 1];
		
		a[now].next = (struct stu far*)( &(a[last]) );

	
	}
	
	
	
	
	
}

void print()
{
	
	
	unsigned int i,now;
	
	for(i = 0;i < count ;i++ )
	{
	

		now = index[i];
		printf("     id: %u\n",now);
		
		printf("     now address: %lx\n",(char far*)(  &(a[i]) )  );
		
		printf("%d.  c: %u , os: %u , masm: %u ,java: %u.  sum: %u  \n",(i+1),a[now].c,a[now].os,a[now].masm,a[now].java,sum[now] );

		
		printf("     next address: %lx\n\n",(char far*)(a[i].next) );
		
		printf("next..............................................\n\n");



	
	}
	
	
	
}

void main(void)
{
	
	
	copy();
	select();
	connect();
	print();
	
	
	
	
}




