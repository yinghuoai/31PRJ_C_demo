#include <stdio.h>
#include <string.h>


main()

{

  FILE *fp;

  char ch;

  if((fp=fopen("c:\\oneday.txt","a+"))==NULL)

  {

    printf("Cannot open file strike any key exit!");

    getch();

    exit(1);

  }

  printf("input a string:\n");

  ch=getchar();

  while (ch!='\n')

  {

    fputc(ch,fp);

    ch=getchar();

  }

  rewind(fp);

  ch=fgetc(fp);

  while(ch!=EOF)

  {

    putchar(ch);

    ch=fgetc(fp);

  }

  printf("\n");

  fclose(fp);

}
