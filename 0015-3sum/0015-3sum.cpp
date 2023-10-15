class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        vector<vector<int>>ans;
        
        int n=nums.size();
        if(nums.size()==0)return ans;
        
        for(int i=0;i<n;i++){
            
            int j=i+1;
            int k=n-1;
            if(i>0 && nums[i]==nums[i-1]) continue;
            
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==0){
                    vector<int>v;
                    v.push_back(nums[i]);
                    v.push_back(nums[j]);
                    v.push_back(nums[k]);
                    ans.push_back(v);
                    
                    while(j<k && nums[j]==nums[j+1] ){
                        j++;
                    }
                    
                    while( j<k && nums[k]==nums[k-1] ){
                        k--;
                    }
                    j++;
                    k--;
                }
                else if(sum>0){
                    k--;
                }
                else{
                    j++;
                }
                
            }
                     
            
        }
        return ans;
        
        // [-4, -4, -2, -1, -1, 0, 0, 1, 2, 3, 4]
//           i                      j          k                 
    }
};