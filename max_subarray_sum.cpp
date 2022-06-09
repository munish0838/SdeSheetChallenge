#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long int msf = arr[0];
    long long meh = 0;
    //ng long int ans;
    for(long long int i =0;i<n;i++){
        meh += arr[i];
        if(msf<meh){
            msf = meh;
        }
        
        if (meh<0){
            meh = 0;
        }
    }
    if(msf <0){
        return 0;
    }
    return msf;
}
