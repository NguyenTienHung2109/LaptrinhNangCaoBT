#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a[200010],ct =0;
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];
    for (int k = 0; k < n/2; k++)
    {
        if ( a[k] == a[n-1-k] )
        {
            continue;
        }
        else
        {
            ct =1;
            cout << "Asymmetric array.";
            break;
        }
    }
    if(ct ==0)
        cout << "Symmetric array.";
}
