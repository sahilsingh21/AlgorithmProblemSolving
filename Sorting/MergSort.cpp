#include<iostream>
using namespace std;


void Merging(int A[], int m, int B[], int n, int C[]){
    int k=0;
    int i = 0;
    int j = 0;

    while(k < m+n){
        if(j==n || A[i] <= B[j]){
            C[k] = A[i];
            i++;
            k++;
        }
        if(i==m || A[i] > B[j]){
            C[k] = B[j];
            j++;
            k++;
        }

    }
}


void MergSort(int A[], int left, int right, int B[]){
    if(right - left == 1){
        B[0] = A[left];
    }

    if(right - left > 1){
        int mid = (left + right)/2;
        int L[mid+left];
        int R[right-mid];
        MergSort(A, left, mid, L);
        MergSort(A, mid, right, R);

        Merging(L, mid-left, R, right-mid, B);
    }
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }

    int Arr[n];
    MergSort(arr, 0, n-1, Arr);


    for(int i=0;i<n;i++){
        cout<<Arr[i]<<endl;
    }
    return 0;
}