#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{int i,n;
char a[20];
printf("NAME: VIVEK KAUSHIK");
printf("\nCLASS: CSE 3D");
printf("\nROLL NO: 1816110245");
printf("\nEnter the term (to check whether it is in form of(ab*c(a+b)): ");
scanf("%s",&a);
n=strlen(a);
if(a[0]=='a'&& (a[n-1]=='a'|| a[n-1]=='b') && a[n-2]=='c')
{
for(i=1;i<n-2;i++)
{if(a[i]=='b')
continue;
else
{printf("STRING IS REJECTED");
exit(0);
}
}
printf("STRING IS ACCEPTED");
}
else
printf("STRING REJECTED");
getch();
}
