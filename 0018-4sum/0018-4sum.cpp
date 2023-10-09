class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        //time O(n^3)
        //space=O(1)
        
        vector<vector<int>>result;
        int n=nums.size();
        
        if(n<4)return result;
        
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n;i++){
            
            for(int j=i+1;j<n;j++){
                
                long long int target2=1LL*target-1LL*nums[i]-1LL*nums[j];
                
                int left=j+1;
                int right=n-1;
                
                while(left<right){
                    
                    long long two_sum=nums[left]+nums[right];
                    
                    if(two_sum<target2) left++;
                    
                    else if(two_sum>target2) right--;
                    
                    else{
                        
                        vector<int>quad(4,0);
                        quad[0]=(int)nums[i];
                        quad[1]=(int)nums[j];
                        quad[2]=(int)nums[left];
                        quad[3]=(int)nums[right];
                        
                        result.push_back(quad);
                        
                         while(left<right && nums[left]==quad[2]) ++left;
                         while(left<right && nums[right]==quad[3]) --right;
                        
                        
                    }
                    
                    
                }
                
                while(j+1<n && nums[j+1]==nums[j])++j;
                
                
            }
        
           while(i+1<n && nums[i+1]==nums[i])++i;
        }
        return result;
    }
};

