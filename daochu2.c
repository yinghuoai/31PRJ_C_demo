#include <stdio.h>
#include <string.h>
#include <stdlib.h>




int main(int n,char **arg)
{
	
	char *str1 = "mylib.lib"; 
	

	char b[60] = "tlib ";
	char c[10] = "*";
	char d[20] = ",mylib.lst";
	char e[20] = "tcc -c";
	char f[80] = "tlink c0s.obj ";
	char g[50] = " linshi2.obj,linshi2.exe,linshi2.map,cs.lib";
	
	
	char sfunc[10];
	
	
	
	int i;
	

	
	
	
	
	
	printf("n = %d\n", n);


	printf("please input function name:\n");
	
	scanf("%s",sfunc);

	
	
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
	
		
		
		
		strcat(e,"linshi2");
		system(e);
		
		
		strcat(f,sfunc);
		strcat(f,g);
		system(f);
		
			
		system("linshi2");



		

	
	
	
	
	

	return 0;
	
}