#include<bits/stdc++.h>
using namespace std;
int arr[5000];
int main()
{
    int n,x,m,i,j,k,p;
    cin>>m;
    for(i=0;i<m;i++)
    {
        cin>>n>>p;
        for(j=0;j<p;j++)
        {
            cin>>arr[j];
        }
        int c=0;
        for(k=1;k<=n;k++)
        {
            if(k%7==0 || k%7==6)
            continue;
                int x=0;
                for(j=0;j<p;j++)
                {
                    if(k%arr[j]==0)
                    {
                        x=1;
                    }
                }
                     if(x==1)
                    {
                        c++;
                    }
            }
            cout<<c<<endl;
        }
    }
