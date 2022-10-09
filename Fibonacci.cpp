#include<iostream>
using namespace std;
void fibo(int a)
{
    int count[100];
    count[0]=0;
    count[1]=1;
    for(int i=2;i<=a;i++)
    {
        count[i]=count[i-1]+count[i-2];
    }
    cout<<count[a-1]<<endl;
}
int main()
{
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    fibo(n);
    return 0;
}
