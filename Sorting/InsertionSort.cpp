#include <iostream>
using namespace std;

void InsertSort(int A[], int n){
     for(int j=1;j<n;j++)
	 {
	     int key = A[j];
	     int i = j-1;
	     while(i >= 0 && A[i] > key){
	         A[i+1] = A[i];
	         i=i-1;
	     }
	     A[i+1] = key;
	 }

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }

    InsertSort(arr, n);
    cout<<endl;
    for(int j=0;j<n;j++){
        cout<<arr[j]<<endl;
    }

    return 0;
}