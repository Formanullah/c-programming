#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string s;
    int c=0;
    while(getline(cin,s))
    {
        c++;
        if(s=="*")
        {
            break;
        }
        if(s=="Hajj")
            cout<<"Case "<<c<<": Hajj-e-Akbar"<<endl;
        if(s=="Umrah")
            cout<<"Case "<<c<<": Hajj-e-Asghar"<<endl;



    }
}
