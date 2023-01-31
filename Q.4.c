//4. Write a program to search a string in the list of strings.
#include<stdio.h>
#include<string.h>
int main()
{
    char b[20];
    int count=0;
    printf("a program to search a string in the list of strings :-\n");
    char a[5][20]={"golu","milan","pussu","ankit","hada"};
    printf("list of name is:-");
    for(int i=0;i<5;i++)
    {
        for(int j=0;a[i][j]!='\0';j++)
        printf("%c",a[i][j]);
        printf(",");
    }
    printf("\nselect a one name:-");
    gets(b);
    for(int i=0;i<5;i++)
    {
        if(strcmp(a[i],b)==0)
           {
               count++;
           }
    }
    if(count>0)
         printf("%s name is here in the list",b);
    else
         printf("%s name is not here in the list",b);

    getch();
    return 0;
}

