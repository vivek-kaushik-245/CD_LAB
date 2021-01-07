#include<stdio.h>
#include<string.h>
int n,m=0,p,i=0,j=0;
char prodn[10][10],follow[10];
void Follow(char c)
{

    if(prodn[0][0]==c)
    follow[m++]='$';
    for(i=0;i<n;i++)
    {
        for(j=2;j<strlen(prodn[i]);j++)
        {
            if(prodn[i][j]==c)
            {
                if(prodn[i][j+1]!='\0')
                first(prodn[i][j+1]);

                if(prodn[i][j+1]=='\0'&&c!=prodn[i][0])
                Follow(prodn[i][0]);

            }    
        }
    }
}
void first(char c)
{
      int k;
                 if(!(isupper(c)))
                 follow[m++]=c;
                 for(k=0;k<n;k++)
                 {
                 if(prodn[k][0]==c)
                 {
                 if(prodn[k][2]=='$') 
                 Follow(prodn[i][0]);
                 else if(islower(prodn[k][2]))
                 follow[m++]=prodn[k][2];
                 else first(prodn[k][2]);
                 }
                 }

}
int main()
{
 int i,z;
 char c,ch;
 printf("Enter the no.of productions:");
 scanf("%d",&n);
 printf("Enter the productions(epsilon=$):\n");
 for(i=0;i<n;i++)
  scanf("%s%c",prodn[i],&ch);

 do
 {
  m=0;
  printf("Enter the element whose FOLLOW is to be found:");

  scanf("%c",&c);
  Follow(c);
  printf("FOLLOW(%c) = { ",c);
  for(i=0;i<m;i++)
   printf("%c ",follow[i]);
  printf(" }\n");
  printf("Do you want to continue?(press 1 to continue)");
  scanf("%d%c",&z,&ch);
 }
 while(z==1);
}
