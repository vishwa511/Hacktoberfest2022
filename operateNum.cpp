#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("fma,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
#pragma GCC optimization ("unroll-loops")
#define ll long long 
#define MAX_SIZE 1000005
#define sp " "
#define M 1000000007
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
#include <string.h>
  using namespace std;
ll fact(ll n)
{
   if(n==0 || n==1)
    return 1;
  return n*fact(n-1);
} 
ll extendedGCD(ll a,ll b, ll *x, ll *y)//a>b;
{
  if(b==0)
  {
    *x=1;
    *y=0;
    return a;
  }
  ll x1,y1;
  ll result=extendedGCD(b,a%b,&x1,&y1);

  *x=y1;//final x value will give the MMI of a...
  *y=x1-(a/b)*y1;
  
  return result;//result will give GCD...
}
void PrimeSieve(ll n, ll x)
{
  ll sieve[n];
  sieve[1]=0;
  rop(i,2,n)
    sieve[i]=1;
  for(ll i=2;i*i<=n;i++)
  {
    if(sieve[i]==1)
    {
      for(ll j=i*i;j<=n;j=j+i)
        sieve[j]=0;
    }
  }
}
void leastPrime(ll n)
{
  ll sieve[n];
  sieve[1]=0;
  rop(i,2,n)
    sieve[i]=1;
  for(ll i=2;i<=n;i++)
  {
    if(sieve[i]==1)
    {
      for(ll j=i;j<=n;j=j+i){
        if(sieve[j]==1)
          sieve[j]=i;
      }
    }
  }
  for(ll i=2;i<=n;i++)
  {
    cout<<sieve[i]<<" ";
  }
}
ll phifactor(ll n)
{
  ll result=n;
  for(ll i=2;i*i<=n;i++)
  {
    if(n%i==0)
    {
      while(n%i==0)
      {
        n=n/i;
      }
      result=result-result/i;
    }
  }
  if(n>1)
    result=result-result/n;
  return result;
}
ll modexpo(ll a, ll b, ll m)//a to the power b...
{
  if(a==0)
    return 0;
  if(b==0)
    return 1;
  ll result;
  if(b%2==0)
  {
    result=modexpo(a,b/2,m);
    result=((result%m)*(result%m))%m;
  }
  else
  {
    result=a%m;
    result=result*modexpo(a,b-1,m);
  }
  return (result%m+m)%m;
}
ll binaryexpo(ll a, ll b)
{
  ll result=1;
  while(b>0)
  {
    if(b&1)
      result*=a;
    a*=a;
    b=b>>1;
  }
  return result;
}
ll fast_modexpo(ll a, ll b, ll m)
{
  ll result=1;
  while(b>0)
  {
    if(b&1)
      result=((result)%m*(a)%m)%m;
    a=((a%m)*(a%m))%m;
    b=b>>1;
  }
  return result;
}
/*..........................................................................*/

ll solve(ll p, ll q, ll result)
{
  result+=max(p,q)/min(p,q);
  if(max(p,q)%min(p,q)==0)
    return result;
  else
  {
    return solve(max(p,q)%min(p,q),min(p,q),result);
  }
}
int main()
{
  ll t=1;
  cin>>t;
  while(t--)
  {
    ll p,q,result; cin>>p>>q;
    cout<<solve(p,q,0)<<el;
  }
  return 0;
}
