#include <bits/stdc++.h>
#include <string.h>
  using namespace std;
int solve(int n)
{
   if(n==0)
     return 0;
   return (n+solve(n-1));
} 
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
   int n;
   cin>>n;
   cout<<solve(n)<<endl;
  }
}
