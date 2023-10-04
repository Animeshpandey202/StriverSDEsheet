class Solution {
public:
    int maxProfit(vector<int>& prices) {
       //time=O(n) space=O(1)
        int profit=0;
        int buy=prices[0];
        int maxi=INT_MIN;
        for(int i=1;i<prices.size();i++){
            
            int cursell=prices[i]-buy;
            maxi=max(maxi,cursell);
            
            buy=min(buy,prices[i]);
        
        }
         return max(maxi,0);
    }
};