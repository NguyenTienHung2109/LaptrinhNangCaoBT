#include<bits/stdc++.h>
using namespace std;
int main()
{
    double i=1,n,tu=1 , mau=1;
    cin>>n;
    double sum=1, oldsum =0,phantumoi = 1;
    double phepchia;
    while(sum - oldsum > 0.001)
    {
        phepchia = n/i;
        phantumoi *= phepchia;
        oldsum = sum;
        sum+=phantumoi;
        i++;
    }
    cout<<fixed<<setprecision(4)<<sum;
}
