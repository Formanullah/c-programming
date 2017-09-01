#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,a[10000],i,x;
    while(cin>>n>>r)
    {
        for(i=1; i<=r; i++)
        {
            cin>>x;
            a[x]=-1;
        }
        if(n==r)
            printf("*");
        else
        {
            for(i=1; i<=n; i++)
            {
                if(a[i]==0)
                    printf("%d ",i);
            }
        }
        printf("\n");
        memset(a, 0, sizeof(a));
    }
}
