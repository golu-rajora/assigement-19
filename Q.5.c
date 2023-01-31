//5. Suppose we have a list of email addresses, check whether all email addresses have
//‘@’ in it. Print the odd email out.
#include<stdio.h>
#include<string.h>
int main()
{
    printf("we have a list of email addresses, check whether all email addresses have\n @ in it Print the odd email out.:-\n");
    char a[5][20]={"laxmi@1","rajora2","ch@nd","golu23","jassmanak@123"};
    printf("list of email adderess is:-");
    for(int i=0;i<5;i++)
    {
        for(int j=0;a[i][j]!='\0';j++)
            printf("%c",a[i][j]);
            printf(",");
    }
    printf("\nlist of email adderess in valid is-\n");

    for(int i=0;i<5;i++)
    {
        for(int j=0;a[i][j]!='\0';j++)
         if(a[i][j]=='@')
            printf("%s\n",a[i]);
    }
    getch();
    return 0;
}


