#include<bits/stdc++.h>
using namespace std;
const int maxn = 1010;
int main()
{
    double n,a[maxn],b[maxn],sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    double mean = sum/n,var=0;
    for(int i=0;i<n;i++)
    {
        var+=(a[i]- mean)*(a[i] - mean);
    }
    cout<<fixed<<setprecision(2)<<var/n;
}
