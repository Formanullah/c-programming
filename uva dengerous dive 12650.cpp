#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10001];
    int x,n,r;
    while(cin>>n>>r)
    {
        for(int i=1;i<=r; i++)
        {
            cin>>x;
            arr[x]=-1;
        }
        if(n==r)
            cout<<"*";
        else
        {
            for(int j=1; j<=n; j++)
            {
                if(arr[j]==0)
                    cout<<j<<" ";
            }
        }
        cout<<endl;
        memset(arr,0,sizeof(arr));
    }
}
