#include<bits/stdc++.h>
using namespace std;
int arr[100000005];
int main()
{
    long long int i,j,a,b,n,m;
    while(cin>>n>>m)
    {
        if(n==0 && m==0)
            break;
        else
        {
            for(i=0; i<n; i++)
            {
                cin>>a;
                arr[a]=1;
            }
            int c=0;
            for(j=0; j<m; j++)
            {
                cin>>b;
                if(arr[b]==1)
                    c++;
            }
            cout<<c<<endl;
            memset(arr,0,sizeof(arr));
        }
    }
}
