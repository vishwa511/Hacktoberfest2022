#include<iostream>
using namespace std;
void insertionSort(int n, int arr[]){
    for(int i=1;i<n;i++)
    {
        int j=i-1;
        int temp=arr[i];
        while (j>=0)
        {
            
            if(arr[j]>temp)
            {
                arr[j+1]=arr[j];
            }
            else
                break;
            j--;
        }
        arr[j+1]=temp;
    }
}
int main()
{
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int arr[50];
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    insertionSort(n,arr);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}
