//1. Write a program to find the number of vowels in each of the 5 strings stored in two dimensional arrays, taken from the user.
#include<stdio.h>
#include<string.h>
int main()
{
    int count=0;
  printf(" a program to find the number of vowels in each of the 5 strings stored in two dimensional \n arrays, taken from the user:-\n");
  printf("enter the 5 string:-");
  char c[5][20];
  for(int i=0;i<=4;i++)
    gets(c[i]);
  for(int i=0;i<5;i++)
  {
      for(int j=0;c[i][j]!='\0';j++)
      {
          if(c[i][j]=='a'||c[i][j]=='e'||c[i][j]=='i'||c[i][j]=='o'||c[i][j]=='u')
            count++;
      }
  }
  printf("all the string in %d vowels here",count);
  getch();
  return 0;
}
