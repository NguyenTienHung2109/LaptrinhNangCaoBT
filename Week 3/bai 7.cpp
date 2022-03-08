#include<bits/stdc++.h>
using namespace std;
int main()
{
    int chu =0, so =0, kitu = 0;
    string s;
    getline(cin, s);
    for(int i=0;i<s.length();i++)
    {
        if((s[i] >='a' && s[i] <= 'z')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='0' && s[i]<= '9'))
        {
            if((s[i] >='a' && s[i] <= 'z')||(s[i]>='A'&&s[i]<='Z'))
                chu ++;
            else so ++;
        }
        else kitu ++;
    }
    cout <<chu <<" "<<so << " " <<kitu;
}
