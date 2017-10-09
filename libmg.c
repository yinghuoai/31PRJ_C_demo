#include <stdio.h>
#include <string.h>
#include <stdlib.h>




int main(int n,char **arg)
{
	
	char *str1;
	
	char a[20] = "tcc -c ";
	char b[60] = "tlib ";
	char c[10] = "+";
	char d[20] = ",mylib.lst";
	int i;
	str1 = "mylib.lib";
	
	
	printf("n = %d\n", n);

	if(n < 2)
	{
		printf("error: please input the filename!");
		return 0 ;
		
	}
	
	strcat(a,arg[2]);
	system(a);
	printf("arg[0] = %s",arg[0]);
	
	
	for(i = 0;arg[2][i]!='\0';i++)
		{
			if(arg[2][i] ==  '.')
			{
				arg[2][i] = '\0';
				
			}
			
			
		}



	


		

		strcat(b,str1);
		strcat(b,c);
		strcat(b,arg[2]);
		strcat(b,d);
		system(b);
	
		


	return 0;
	
}