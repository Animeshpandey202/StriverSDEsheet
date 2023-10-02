class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=INT_MIN;
        int cur=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            
            cur+=nums[i];
             maxi=max(maxi,cur);
            if(cur<0)cur=0;
           
        }
        return maxi;
        
        
    }
};