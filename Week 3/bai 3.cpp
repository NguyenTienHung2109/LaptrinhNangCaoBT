#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a[200010];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        if(i==0 || a[i] != a[i-1])
            cout<<a[i]<<" ";
}
