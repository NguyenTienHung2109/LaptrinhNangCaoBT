#include<bits/stdc++.h>
using namespace std;
const int maxn = 1010;
int main()
{
    double n,a[maxn];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=n-1;i>=0;i--)
    {
        cout<<fixed<<setprecision(2)<<a[i]<<" ";
    }
}
