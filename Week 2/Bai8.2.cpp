#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    if(s[0]=='-')
        cout<<s.length()-1;
    else cout << s.length();
}
