#include<stdio.h>
#include<math.h>
int prime(int n)
{
    int i;
    for(i=2; i<sqrt(n); i++)
    {
        if(n%i==0)
            return 1;
    }
    return 0;
}
int main()
{
    int test;
    while(scanf("%d",&test)==1)
    {
        for(int i=0; i<test; i++)
        {
            long long int n;
            int res=0;
            scanf("%lld",&n);
            res=prime(n);
            if(res==0)
                printf("Prime\n");
            else
                 printf("Not Prime\n");
        }
    }
}
