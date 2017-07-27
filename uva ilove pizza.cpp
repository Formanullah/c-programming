#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        int A,M,R,G,I,T;
        A=count(s.begin(),s.end(),'A');
        M=count(s.begin(),s.end(),'M');
        R=count(s.begin(),s.end(),'R');
        G=count(s.begin(),s.end(),'G');
        I=count(s.begin(),s.end(),'I');
        T=count(s.begin(),s.end(),'T');
        int ans=min(A/3,min(M,min(R/2,min(G,min(I,T)))));
        cout<<ans<<endl;
    }
}
