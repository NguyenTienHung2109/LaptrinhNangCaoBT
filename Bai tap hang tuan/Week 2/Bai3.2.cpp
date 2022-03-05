#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,u,can;
    cin>>l>>u;
    for(int i=l;i<=u;i++)
    {
        can =sqrt(i);
        if(can*can==i)
        {
            cout<<i<<" ";
        }
    }
}
