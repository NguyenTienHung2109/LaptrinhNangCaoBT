#include<bits/stdc++.h>
using namespace std;
int main()
{
    int dem =0;
    string s;
    getline(cin, s);
    for(int i=0;i<s.length();i++)
    {
        if(s[i] == ' ')
            dem++;
    }
    cout << dem +1;
}
