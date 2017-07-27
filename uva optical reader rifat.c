#include<stdio.h>
int main()
{
    int n,arr[10],i,j,count,k;
    while(scanf("%d",&n)==1)
    {
        for(i=1;i<=n;i++)
        {
            count=0;
            for(j=0;j<5;j++)
            {
                scanf("%d",&arr[j]);
                if(arr[j]<=127)
                {
                    count++;
                    k=j+1;
                }
            }
                if(count==1)
                {
                    if(k==1)
                printf("A\n");
                else if(k==2)
                printf("B\n");
                else if(k==3)
                printf("C\n");
                else if(k==4)
                printf("D\n");
                else if(k==5)
                printf("E\n");
                }
                else
            printf("*\n");
        }
    }
    return 0;
}
