#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double a[200010];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=n-1;i>=0;i--)
        cout << fixed << setprecision(2)<<a[i]<<" ";
}
