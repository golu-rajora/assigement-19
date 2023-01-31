// 7. From the list of IP addresses, check whether all IP addresses are valid
#include<stdio.h>
#include<string.h>
int main()
{
    char a[5][20]={"192.200.150.0","205.06.0.0","100.200.234.0","0.0.0.0","245.10.02.0"};
    char t[20];
    int x;
    printf("From the list of IP addresses, check whether all  addresses are valid:-\n");
    printf("list of  addresses:-\n");
    for(int i=0;i<5;i++)
        printf("%d-%s\n",i+1,a[i]);
        for(int i=0;i<=4;i++)
        {
            for(int j=0;a[i][j]!='/0';j++)
            {
                 t=strtok(a,0);
                 x=atoi(t);
                 if(x>=&&x<=255)
                    printf("%s is valid",a[i]);
                 else
                    printf("%s is not valid",a[i]);
            }
        }

        getch();
        return 0;
}
