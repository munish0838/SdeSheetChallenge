#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
    vector<vector<long long int>> r(n);
    for(long long int i = 0 ;i<n;i++){
        r[i].resize(i+1);
        r[i][0] = 1;
        r[i][i] = 1;
        
        for(long long int j = 1;j<i;j++){
            r[i][j] = r[i-1][j-1] + r[i-1][j];
        }
    }
    return r;
    
}
