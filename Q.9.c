//9. Write a program that asks the user to enter a username. If the username entered is
//one of the names in the list then the user is allowed to calculate the factorial of a
//number. Otherwise, an error message is displayed
#include<stdio.h>
#include<string.h>
int fact(int x)
{
    int s=1;
    for(x;x>0;x--)
        {s=s*x;}
    return s;
}
int main()
{
    char a[5][20]={"golu_rajora","laxmi_rajora","chand_rajora","jass_manak","king"};
    char b[20];
    int count=0;
    printf("list of username:-");
    for(int i=0;i<=4;i++)
        printf(" %s",a[i]);
    printf("\nenter a username:-");
    gets(b);
    for(int i=0;i<=4;i++)
    {
        if(strcmp(a[i],b)==0)
            count++;
    }
    if(count==1)
      {

     int x,y;
        printf("enter a number you want factorial:-");
         scanf("%d",&x);
          y=fact(x);
        printf("factorial of %d number is=%d",x,y);
      }
      else
        printf("invalid username");
      getch();
      return 0;

}

