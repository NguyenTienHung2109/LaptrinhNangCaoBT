#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[200010],b[200010],ct =0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            ct =1;
            cout << "NO";
            break;
        }
    }
    if(ct ==0)
        cout << "YES";
}
