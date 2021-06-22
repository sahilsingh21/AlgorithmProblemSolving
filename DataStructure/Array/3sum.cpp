#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector<vector<int>> twosum(vector<int> &arr, int n, int val, int tar){
    int q=0;
    int p = n-1;
    vector<vector<int>> brr;
    int i=0;
    while (q != p)
    {
        if((arr[q]+arr[p]) == tar){
            brr.push_back({val, arr[q], arr[p]});
            i++;
            q++;
            p++;
        }else if((arr[q]+arr[p]) < tar){
            q++;
        }else if((arr[q]+arr[p]) >tar){
            p++;
        }
    }
    return brr;
}

int main(){
    vector<int> arr ={-1,0,1,2,-1,-4};
    sort(arr.begin(),arr.end());
    vector<vector<int>> trr;
    trr = twosum(arr,6,-2,0);

    for (int i=0;i<trr.size();i++)
    {
        for (int j = 0; j < trr[0].size(); j++)
        {
            cout<<trr[i][j]<<" ";
        }
        
        cout<<endl;
    }
    
    return 0;
}