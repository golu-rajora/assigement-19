//10. Create an authentication system. It should be menu driven
#include<stdio.h>
#include<string.h>
int main()
{
    char a[5][20]={"golu_rajora","laxmi_rajora","chand_rajora","jass_manak","king"};
    char ch, b[20],pass[10];
    int count=0;
    printf("enter your username:-");
    gets(b);
    for(int i=0;i<5;i++)
        if(strcmp(a[i],b)==0)
            count++;
    if(count==1)
    {
        printf("create your password with 8 character:-");
        for(int i=0;i<8;i++)
        {
            ch=getchar();
            pass[i]=ch;
            ch='*';
            printf("%c",ch);
        }
    }
    else
        printf("invalid your user name");
    getch();
    return 0;
}


