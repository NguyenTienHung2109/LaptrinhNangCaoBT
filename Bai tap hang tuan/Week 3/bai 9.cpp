#include<bits/stdc++.h>
using namespace std;
int main()
{
    int dem = 0;
    string s;
    getline(cin, s);
    int j=0;
    while(s[j]==' ')
    {
        j++;
    }
    for(int i=j;i<s.length();i++)
    {
        if(s[i]==' ')
        {
            dem++;
        }
        else
            dem =0;
        if(dem >1)
        {
            s.erase(s.begin()+i);
            dem++;
            i--;
        }
    }
    cout << s;

}
