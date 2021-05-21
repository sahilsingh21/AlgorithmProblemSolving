#include<iostream>
using namespace std;

void QuickSort(int A[], int l, int r){

    if(r-l <= 1){
        return ;
    }
    int yellow = l+1;
    for(int green = 0; green < r; green++){
         if(A[green] <= A[l]){
             int temp = A[yellow];
             A[yellow] = A[green];
             A[green] = temp;
             yellow++;
         }
         int temp = A[l];
         A[l] = A[yellow-1];
         A[yellow-1] = temp;
       QuickSort(A, l, yellow);
       QuickSort(A, yellow+1, r);
    }
}



int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    QuickSort(arr, 0, n-1);


    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}