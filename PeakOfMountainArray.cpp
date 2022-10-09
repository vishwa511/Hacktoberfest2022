#include<iostream>
using namespace std;
void peakofarrayLS(int arr[],int size)
{ 
   int ans=-1;
   for(int j=0;j<size;j++)
   {
       if (arr[j]<arr[j+1])
       {
           continue;
       }
       ans=j;
       break;
   }
   cout<<"Peak of array by linear search= "<<ans<<endl;
}
void peakofarrayBS(int arr[],int size)
{ 
   int start=0;
   int end =size-1;
   int mid=(start + end)/2;
   while(start<end)
   {
      if(arr[mid]>arr[mid+1])
      {
          end=mid;
      }
      else
      {
          start=mid+1;
      }
      mid=(start + end)/2;
   }
   cout<<"Peak of array by binary search= "<<mid<<endl;
}

int main()
{
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int arr[50];
    cout<<"Enter the mountain array elements"<<endl;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    peakofarrayLS(arr,n);
    peakofarrayBS(arr,n);
    //int totaloccurence=first - last +1;
    /*if(index!=0)
    cout<<"The key is found at index "<<index<<endl;
    else
    cout<<"The key is not found"<<endl;*/
    return 0;
}
