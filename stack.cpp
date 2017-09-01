#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, i;
    stack <int> st;

    for(i = 0; i < 5; i++)
    {
        cin >> x;
        st.push(x);
    }
    while(st.size() > 0)
    {
        cout<< st.top()<< endl;
        st.pop();
    }



}
