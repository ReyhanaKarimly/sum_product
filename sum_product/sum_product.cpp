#include <stdio.h>
#include <conio.h>
int main()
{
	int a,b,c,c2;
	printf("Enter a and b:");
	scanf("%d%d",&a,&b);
	c=a+b;
c2=a*b;
	printf("c=a+b=%d+%d=%d",a,b,c);
	printf("\nc2=a*b=%d*%d=%d",a,b,c2);
	getch();
}