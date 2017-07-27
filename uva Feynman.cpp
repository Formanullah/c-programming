#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
        {
            break;
        }
            int sum=0;
        for(int i=1;i<=n;i++)
        {
            sum=sum+i*i;
        }
        cout<<sum<<endl;

    }
}
