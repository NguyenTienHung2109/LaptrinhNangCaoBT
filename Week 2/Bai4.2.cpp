#include<bits/stdc++.h>
using namespace std;
int main()
{

    int ct =0,num,chan,ga,cho;
    cin>>num>>chan;
    if((chan- 2*num)%2==0)
        cho = (chan - 2*num)/2;
    else
    {
        cout<<"invalid";
        ct =1;
    }
    if(ct ==0)
    {
        ga = num - cho;
        cout << "chicken = "<<ga<<", dog = "<<cho;
    }
}
