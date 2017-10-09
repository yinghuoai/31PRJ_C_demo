int n = 1;


void s(int n)

{
	
	n++;
    printf("s include n=%d\n",n);

	printf("s include n address=%lx\n",&n);
		
}


int main()

{
	
    printf("before s include n=%d\n",n);
	
	printf("before s include n address=%lx\n",&n);
	
    s(n);
	
    printf("after s include n=%d\n",n);
	
	printf("after s include n address=%lx\n",&n);
	
	
	return 0;

}


