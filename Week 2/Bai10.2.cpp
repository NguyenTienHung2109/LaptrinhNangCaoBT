#include<bits/stdc++.h>
using namespace std;
const int maxn = 1010;
int main()
{
    double n,a[maxn],b[maxn],sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];
    for(int i=0;i<n;i++)
    {
        sum+=a[i]*b[i];
    }
    cout<<fixed<<setprecision(2)<<sum;
}
