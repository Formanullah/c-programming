#include<iostream>
using namespace std;
#include<string>
int main()
{
    string s,s1;

    while(getline(cin,s))
    {
        if(s=="*")
        {
            break;
        }
        else
    {
        s1="";
        for(int i=0;i<s.size();i++)
        {
            if(i==0)
            {
                s1+=s[i];
            }
            if(s[i]==' ')
            {
                s1+=s[i+1];
            }
        }
          for(int j=0; j<s1.size(); j++)
        {
            if(islower(s1[j]))
            {
                s1[j]=s1[j]-32;
            }
        }
        int c=0;
       for(int m=0;m < s1.size();m++)
       {
           if(s1[0]==s1[m])
           {
               c++;
           }
       }
       if(c==s1.size())
       {
           cout<<"Y"<<endl;
       }
       if(c!=s1.size())
        cout<<"N"<<endl;
    }
}

}
