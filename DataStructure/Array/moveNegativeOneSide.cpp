#include<bits/stdc++.h>
using namespace std;

void moveOneSide(int arr[], int n){
    int i=0;
    int j=0;
    while (i != n && j != n)
    {
        if(arr[i] < 0){
            i++;
            j++;
        }else if(arr[j] >= 0){
            j++;
        }else if(arr[j] < 0){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j++;
        }
    }
    
}

int main(){
    int n =9;
    // cin>>n;
    int arr[n] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arr[i];
    // }
    moveOneSide(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}