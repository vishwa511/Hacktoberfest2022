#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("fma,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
#pragma GCC optimization ("unroll-loops")
#define ll long long 
#define el endl
#define pb push_back
#define mp make_pair
#define rep(i,a,n) for(int i=a;i<n;i++)
#define rop(i,a,n) for(int i=a;i<=n;i++)
#define I insert
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(v) v.begin(),v.end()
#define PI 3.1415926535
#define fi first
#define se second
#define pp pair<int,int>
#define setx(n) fixed<<setprecision(n)
#define MAX (int)1e5+10
using namespace std;
bool ifsort(ll *ar,ll n)
{
    ll f=1;
   for(ll i=0;i<n-1;i++)
     {
        if(ar[i]>ar[i+1])
            f=0;
     }
     if(f==0)
        return false;
    else
        return true;
}
int main()
{
    string str; cin>>str;
    ll cnt=1,max=1;
    char cr=str[0];
    rep(i,1,str.length())
    {
        if(str[i]==cr)
            cnt++;
        else
        {
            cr=str[i];
            if(cnt>max)
                max=cnt;
            cnt=1;
        }
    }
    if(cnt>max)
        max=cnt;
    cout<<max<<el;
    return 0;
}
