#include<bits/stdc++.h>
using namespace std;
int main()
{
    int chu =0, so =0, kitu = 0;
    string s;
    getline(cin, s);
    int found = 10;
    while (found != string::npos)
    {
        found = s.find("Zues");
        //cout <<  << " ";
        if(found >= 0)
            swap(s[found+1],s[found +2]);
    }
    cout << s;

}
