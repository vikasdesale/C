#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
  int a,b,c;
  clrscr();
  printf("\n\t......Practical 5. Program to Find the Largest of Three Numbers.........\n");
  printf("\n\t Enter Number One....\n\t");
  scanf("  %d",&a);
  printf("\n\t Enter Number Two....\n\t");
  scanf("  %d",&b);
  printf("\n\t Enter Number Three....\n\t");
  scanf("  %d",&c);
  printf("\n\t Finding Largest of Three Numbers Please Wait.");
  //delay(1000);
  printf(".");
  //delay(1000);
  printf("..");
  //delay(1000);
  printf("...");
  printf("....\n");
  if(a>b)
  {      if(a>c)
	 {
		printf("\n\t %d  is Largest Number",a);
	 }
	 else
	 {
		printf("\n\t %d is Largest Number",c);
	 }
  }else{
	if(b>c)
	{
		printf("\n\t %d  is Largest Number",b);
	}
	else
	{
		printf("\n\t %d is Largest Number",c);
	}
  }
  printf("\n\n\n\n\t\t\t********........Submittted By........*********\n");
  printf(" \t\t\t\t\tMr. Vikas RAMESH Desale\n");
  printf("\t\t\t\t\tSE CSE\n");
  printf(" \t\t\t\t\tE. No.BE14S05F005\n");
  printf("\t\t\t\t\tSubject: Programming Language\n");
  getch();


}