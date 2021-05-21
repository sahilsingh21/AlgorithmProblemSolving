#include<iostream>
using namespace std;

bool Bsearch(int k, int A[], int l, int r){
    if(r-l == 0){
        return false;
    }
    int mid = (l + r)/2;
    if(k == A[mid]){
        return true;
    }
    if(k < A[mid]){
        return (Bsearch(k, A, l, mid));
    }else
    {
        return (Bsearch(k, A, mid+1, r));
    }
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"This will work only sorted array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sr;
    cout<<"Enter the value Which you will find : ";
    cin>>sr;
    bool get = Bsearch(sr, arr, 0, n-1);
     if(get == true){
         cout<<"This value exist in Array"<<endl;
     }else
     {
         cout<<"This value in not exit in Array"<<endl;
     }
 return 0;   
}