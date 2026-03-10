class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int a=INT_MAX;
       int b=INT_MIN;
       for(int i=0;i<prices.size();i++){
        a=min(a,prices[i]);
        b=max(b,prices[i]-a);
       }
       return b; 
    }
};