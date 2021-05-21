#include <iostream>
using namespace std;

void HeapSort(int Arr[], int n){
    cout<<endl<<endl;
    int i,j;
    int f,d;
    int max;
    for(int k=n;k>0;k--){
         j = k;
         i = k-1;
        int d = j/2;
        
        if(Arr[j] >= Arr[i]){
            max = j;
        }else
        {
            max = i;
        }

        if(Arr[max] > Arr[d]){
            int temp = Arr[max];
            Arr[max] = Arr[d];
            Arr[d] = 
        }

        for(int i=0;i<n;i++){
            cout<<Arr[i]<<" ";
        }
        cout<<endl;
    }
}



int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=1;i<=n;i++){
       cin>>arr[i];
   }

    HeapSort(arr, n);

// for(int j=1;j<=n;j++){
//     cout<<arr[j]<<endl;
// }

    return 0;
}