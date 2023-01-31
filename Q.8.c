//8. Given a list of words followed by two words, the task is to find the minimum distance
//between the given two words in the list of words
#include<stdio.h>
#include<string.h>
int main()
{
    char a[5][20]={"golu","rajora","laxmi","chand","great"};
    char T1[20];
    char T2[20];
    int i,j;
    printf("to find the minimum distance between the given two words in the list of words:-\n");
    printf("list of word:-");
    for(int i=0;i<5;i++)
        printf("%s,",a[i]);
        printf("\nenter a first word:-");
        gets(T1);
        printf("enter a second word:-");
        gets(T2);
        for( i=1;i<=5;i++)
          {
            if(strcmp(T1,a[i-1])==0)
              break;
          }
          for(j=i+1;j<=4;j++)
          {
              if(strcmp(T2,a[j])==0)
                {printf(" distance is=%d",j-i);
              break;}
          }



        getch();
        return 0;


}
