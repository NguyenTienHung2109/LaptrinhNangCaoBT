#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ct =0;
    string s;
    getline(cin, s);
    if(s[0]>='0'&&s[0]<='9'||s.length()<6||s.length()>15)
        cout << "Invalid username.";
    else
    {
        for(int i=0;i<s.length();i++)
        {
            if((s[i]>='a'&& s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='0' && s[i]<='9'))
                continue;
            else
            {
                ct = 1;
                cout << "Invalid username.";
                break;
            }
        }
        if(ct == 0)
        {
            cout <<"Valid username.";
        }
    }

}
