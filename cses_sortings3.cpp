#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("fma,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
#pragma GCC optimization ("unroll-loops")
#define ll long long 
#define MAX_SIZE 1000005
#define sp " "
#define M 1000000000000000007
#define el endl
#define pb push_back
#define mp make_pair
#define rep(i,a,n) for(int i=a;i<n;i++)
#define rop(i,a,n) for(int i=a;i<=n;i++)
#define vll vector<ll>
#define I insert
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(v) v.begin(),v.end()
#define PI 3.1415926535
#define fi first
#define se second
#define pp pair<int,int>
#define setx(n) fixed<<setprecision(n)
#define MAX (int)2e5+10
#include <string.h>
using namespace std;
 
/*..........................................................................*/
void time_limit_exceeded()
{
    ll n,x; cin>>n>>x;
    vll v(n);
    rep(i,0,n) cin>>v[i];
    sort(all(v));
    ll cnt=0;
    ll i=0,j=n-1;
    while(i<j)
    {
        if(v[i]+v[j]<=x)
        {
            cnt++;
            i++;
            j--;
        }
        else
            j--;
    }
    cnt+=(n-2*cnt);
    cout<<cnt<<el;
}
/*..........................................................................*/
/*
--> Run sample testcases with diff. nums
 
*/
int main()
{
  ll t=1;
  // cin>>t;
  while(t--)
  {
    time_limit_exceeded();
  }
  return 0;
}
