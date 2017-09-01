#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v, v1;
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);

    }
    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); i++)
        cout<< v[i] << " ";
    cout<< endl;

    reverse(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++)
        cout<< v[i] << " ";
    cout<< endl;
    vector <int> :: iterator it;
    it = max_element(v.begin(), v.end());
    cout<<*it<< endl;
    int x;
    cin >> x;
    it = find(v.begin(), v.end(),x);
    v.erase(it);

    for(int i = 0; i < v.size(); i++)
        cout<< v[i] << " ";
    cout<< endl;

    int pos;
    cin >> pos;
    it = find(v.begin(), v.end(),v[pos-1]);

    v.insert(it, 10000);
    for(int i = 0; i < v.size(); i++)
        cout<< v[i] << " ";
    cout<< endl;




}

