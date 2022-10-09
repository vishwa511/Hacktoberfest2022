#include<iostream>
using namespace std;
void rev(int arr2[],int size2)
{
    if(size2%2==0)
    {
        for(int i=0;i<size2;i=i+2)
    {
       swap(arr2[i],arr2[i+1]);
    }
    
    }
    else{
        for(int i=0;i<size2-1;i=i+2)
    {
       swap(arr2[i],arr2[i+1]);
    }
    
    }
}
void printarray(int arr1[],int size1)
{
    cout<<"Reverse array="<<endl;
    for(int i=0;i<size1;i++)
    {
    cout<<arr1[i];
    }
}
int main()
{
    int size;
    cout<<"Enter size of array"<<endl;
    cin>>size;
    int arr[100];
     cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    rev(arr,size);
    printarray(arr,size);
    return 0;
}
