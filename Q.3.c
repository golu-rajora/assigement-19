//3. Write a program to read and display a 2D array of strings in C language
#include<stdio.h>
#include<string.h>
int main()
{
    printf(" a program to read and display a 2D array of strings in C language:-\n");
    char a[5][20]={"java","html","c++","python","c"};
    for(int i=0;i<5;i++)
    {
        for(int j=0;a[i][j]!='\0';j++)
        printf("%c",a[i][j]);
        printf(",");
    }
    getch();
    return 0;
}
