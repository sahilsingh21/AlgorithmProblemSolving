#include<iostream>
using namespace std;


void SelectSort(int A[], int n){
    for(int i=0;i<n;i++){
        int min = i;
        for(int j=min+1;j<n;j++){
            if(A[j] < A[min]){
                min = j;
            }
        }
       int temp = A[i];
       A[i] = A[min];
       A[min] = temp; 
    }
}



int main(){
    int n;
    cout<<"Enter the size of Array : ";
    cin>>n;
    cout<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the value of Array A["<<i<<"] : ";
        cin>>arr[i];
        cout<<endl<<endl;
    }
    SelectSort(arr, n);
    cout<<"Array is sort with the help of Selection Sort "<<endl<<endl;
    for(int j=0;j<n;j++){
        cout<<"Array A["<<j<<"] : "<<arr[j]<<endl;
    }
    return 0;
}