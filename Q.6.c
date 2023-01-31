//6. Write a program to print the strings which are palindrome in the list of strings
#include<stdio.h>
#include<string.h>
int main()
{
    char a[5][20]={"golu","rajora","laxmi","abcdeedcba","chand"};
    int n,count=0;
    printf("a program to print the strings which are palindrome in the list of strings:-\n");
    printf("given list:-");
    for(int i=0;i<=4;i++)
        printf("%s ",a[i]);
        printf("\npalindrome name is:-");
    for(int i=0;i<=4;i++)
    {
        n=strlen(a[i])-1;
       for(int j=0;j<n/2;j++)
       {
           if(a[i][j]==a[i][n-j])
             {count++;
             if(count==n/2)
                printf("%s",a[i]);
                 }
       }
    }
    getch();
    return 0;
}
