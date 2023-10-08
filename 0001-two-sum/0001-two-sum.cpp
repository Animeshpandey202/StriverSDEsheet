class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
// brute force time=O(n^2)        
//         int n=nums.size();
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 if(nums[i]+nums[j]==target)return{i,j};
                
//             }
//         }
//         return{};

        
    
//Optimal approach time=O(n) space=O(n)   
    int n=nums.size();
    unordered_map<int,int> m;
    vector <int> ans;
    
    
    for(int i=0;i<n;i++){
        
        if(m.find(target-nums[i])!=m.end()){
            
            ans.push_back(m[target-nums[i]]);
            ans.push_back(i);
            return ans;
        }
        m[nums[i]]=i;
    }
        return {};
        
        
        
        
        
        
        
        
    }
};

