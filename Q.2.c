//2. Write a program to sort 10 city names stored in two dimensional arrays, taken from the user.
#include<stdio.h>
#include<string.h>
int main()
{
    printf("a program to sort 10 city names stored in two dimensional arrays:-\n");
    printf("enter the 10 city names:-\n");
    char a[10][15];
    char temp[20];
    for(int i=0;i<10;i++)
    gets(a[i]);
    for(int i=0;i<9;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(strcmp(a[i],a[j])>0)
            {
                strcpy(temp,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],temp);
            }
        }
    }
       printf("sort 10 city is-\n");
       for(int i=0;i<10;i++)
       {
           for(int j=0;a[i][j]!='\0';j++)
           {

           printf("%c",a[i][j]);
           }
           printf("\n");
       }
       getch();
       return 0;
}

