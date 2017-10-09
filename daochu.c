#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int can1 = 1,can2 = 2;


int main(int n,char **arg)
{
	
	char *str1 = "mylib.lib"; 
	

	char b[60] = "tlib ";
	char c[10] = "*";
	char d[20] = ",mylib.lst";
	char sfunc[10];
	
	int i;
	

	int count = 1;
	
	
	
	
	printf("n = %d\n", n);


	
	printf("please input function name , can1  and can2 \n");
	
	scanf("%s %d %d",sfunc,&can1,&can2);

	printf("he is : %d \n",can1+can2);
	
	for(i = 0;sfunc[i]!='\0';i++)
		{
			if(sfunc[i] ==  '.')
			{
				sfunc[i] = '\0';
				
			}
			
			
		}



	


		

		strcat(b,str1);
		strcat(b,c);
		strcat(b,sfunc);
		strcat(b,d);
		system(b);
	
		
		
		
		
		
		
		system("linshi2");



		

	
	
	
	
	

	return 0;
	
}