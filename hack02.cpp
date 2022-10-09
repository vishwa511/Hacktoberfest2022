#include <iostream>
using namespace std;

int sumArray(int arr[] , int size){
    int sum =0;
    for (int i=0; i<size ;i++){

        sum = sum +arr[i];

    }
    return sum;
}
int main(){

    int size;

    cin >> size ;

    int arr[100] ;

    //Taking values for array
    for(int i=0 ; i<size ; i++){
        cin >> arr[i];
    }

    int Ans=sumArray(arr , size);

    cout << "The sum of the element within array is " << Ans ;

    return 0;


}
