#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int size = prices.size();
    int minPro = 0;
    int minVal = INT_MAX;
    
    for(int i =0;i<size;i++){
        minVal = min(prices[i], minVal);
        minPro = max(minPro,prices[i] - minVal);
    }
    
    return minPro;
}
