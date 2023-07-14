#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{   
    ll n,q,type,x,k;
    cin>>n>>q;
    ll a[n+1];
    for(ll i =0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+ n);
    while(q--)
    {
        cin>>type>>x>>k;
        ll min=0,max=0;
        if(type==0)
        {
            for(ll i =0;i<k;i++)
            {
                min +=a[i];
            }
             cout<<min<<endl;
        }
        else if(type==1)
        {
            for(ll i =x-1;i>=x-k;i-- )
            {
                max+=a[i];
            }
            cout<<max<<endl;
        }

    }
}


int main()
{
    solve();
    return 0;
}