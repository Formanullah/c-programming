#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p;
    while(cin>>n)
    {
        for(p=0; p<n; p++)
        {
            string s;
            cin>>s;
            long long int sum=0;
            for(int i=0; i<s.size(); i++)
            {
                int ar=1;
                for(int j=0; j<s.size(); j++)
                {
                    ar=(s[i]-48)*ar;
                }
                sum=sum+ar;
            }
            long long int res=0;
            for(int k=0; k<s.size(); k++)
            {
                res=s[k]-48+res*10;
            }
            if(sum==res)
            {
                cout<<"Armstrong"<<endl;
            }
            else
            {
                cout<<"Not Armstrong"<<endl;
            }
        }
    }
    return 0;
}
