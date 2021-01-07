#include<stdio.h>
#include<ctype.h>

int count,n=0;
char prodn[10][10],first[10];

void First(char ch)
{int j;
    /*if(!isupper(ch))
    {
        first[n++]=ch;
    }*/
    for(j=0;j<count;j++)
    {
        if(prodn[j][0]==ch)
        {if(prodn[j][2]=='$')
        {
            first[n++]='$';
        }
        else if(islower(prodn[j][2]))
        {
            first[n++]=prodn[j][2];
        }
        else
        First(prodn[j][2]);
        }
    }
}
    
void main()
{int i,choice;
char c,ch;
printf("Enter the no of productions: ");
scanf("%d",&count);
printf("\nEnter %d the production, epsilon=$ : ",count);
for(i=0;i<count;i++)
scanf("%s%c",prodn[i],&ch);
do{
    n=0;
    printf("Element :");
    scanf("%c",&c);
    First(c);
    printf("\nFIRST(%c)={",c);
    for(i=0;i<n;i++)
    {printf("%c,",first[i]);
    }
    printf("}\n");
    printf("Press 1 to continue");
    scanf("%d%c",&choice,&ch);
}while(choice==1);
}
