#include<iostream>
using namespace std;
# include<string.h>
#include<algorithm>
int main()
{
    string s1,s2,s3;
    while(getline(cin,s1))
    {
        if(s1=="DONE")
        {
            break;
        }
        else
            s2="";
        for(int i=0; i<s1.size(); i++)
        {
            if(isalpha(s1[i]))
            {
                s2+=s1[i];
            }

        }
        for(int i=0; i<s2.size(); i++)
        {
            if(islower(s2[i]))
            {
                s2[i]=s2[i]-32;
            }
        }
        s3=s2;
        reverse(s3.begin(),s3.end());
        if(s2==s3)
        {
            cout<<"You won't be eaten!"<<endl;
        }
        if(s2!=s3)
        {
            cout<<"Uh oh.."<<endl;
        }
    }
}
