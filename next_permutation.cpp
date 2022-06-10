#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &arr, int n)
{
    // Write your code here.
    int ind1 = -1;
    int ind2 = -1;
    for(int k = n-2;k>=0;k--){
        if(arr[k]<arr[k+1]){
            ind1 = k;
            break;
        }
    }
    
    for(int k = n-1;k>ind1;k--){
        if(arr[k]>arr[ind1]){
            ind2 = k;
            break;
        }
    }
    if(ind1<0){
        reverse(arr.begin(), arr.end());
        return arr;
    }
    swap(arr[ind1],arr[ind2]);
    
    reverse(arr.begin()+ind1+1,arr.end());
        return arr;
}
