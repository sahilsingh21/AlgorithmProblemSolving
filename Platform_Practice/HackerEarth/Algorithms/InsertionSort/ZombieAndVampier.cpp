//https://www.hackerearth.com/practice/algorithms/sorting/insertion-sort/practice-problems/algorithm/the-rise-of-the-weird-things-1/

#include <iostream>
using namespace std;

int main() 
{
	int n;
	int OddSum = 0;
	int EvenSum = 0;
	cin >> n;										// Reading input from STDIN
	int A[n];
	for(int i=0;i<n;i++)
	{
	    cin >> A[i];
	}
	
	// Insertion Sort
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
	 
	// Sum Of Zombies Power And Vampiers Power
	for(int j=0;j<n;j++){
	    int mod;
	    mod = A[j] % 2;
	    if(mod == 0){
	        EvenSum = EvenSum + A[j];
	    }
	    else
	    {
	        OddSum = OddSum + A[j];
	    }
	}
	  for(int i=0;i<n;i++){
	      int mod;
	      mod = A[i] % 2;
	      if(mod == 0){
	          cout<<A[i]<<" ";
	      }
	  }
	  cout<<EvenSum<<" ";
	  
	  for(int i=0;i<n;i++){
	      int mod;
	      mod = A[i] % 2;
	      if(mod != 0){
	          cout<<A[i]<<" ";
	      }
	  }
	  cout<<OddSum<<" ";

    return 0;
}
