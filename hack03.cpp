#include<iostream>
using namespace std;

int nthapterm(int a , int d ,int n){
    int nterm = a+(n-1)*d;
    
    return nterm;
}

int main(){
    int a,d,n;
    
    cout <<"Enter 1st term :"<< endl;
    cin>> a;
    cout <<"Enter common difference :"<< endl;
    cin >>d;
    cout <<"Enter value of n"<< endl;
    cin >> n;
    

    cout<<"Value of nth term is :"<<nthapterm(a,d,n)<<endl;
    return 0;


}
