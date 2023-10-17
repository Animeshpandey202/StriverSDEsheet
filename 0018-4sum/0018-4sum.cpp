class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        vector<vector<int>>ans;
        
        sort(nums.begin(),nums.end());
        
        int n=nums.size();
        
        for(int i=0;i<n-3;i++){
            
            if(i>0 && nums[i]==nums[i-1])continue;
            
            for(int j=i+1;j<n-2;j++){
                 
                if(j>i+1 && nums[j]==nums[j-1])continue;
                
                int low=j+1;
                int high=n-1;
                
                while(low<high){

                    long long sum=long(nums[low])+nums[high]+nums[j]+nums[i];

                    if(sum>target){
                        high--;
                    }
                    else if(sum<target){
                        low++;
                    }
                    else{
                        ans.push_back({nums[low],nums[high],nums[j],nums[i]});

                        while(low<high && nums[low]==nums[low+1]){
                            low++;
                        }

                        while(low<high && nums[high]==nums[high-1]){
                            high--;
                        }
                        
                        low++;
                        high--;

                    }
                
                }
               
                
                
            }  
            
        }
        
        return ans;
        
    }
};