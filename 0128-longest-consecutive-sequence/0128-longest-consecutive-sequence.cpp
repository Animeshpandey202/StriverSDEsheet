class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if(nums.size()==0 || nums.size()==1)return nums.size();
        sort(nums.begin(),nums.end());
        
        int maxi=1;
        int count=1;
        int prev=nums[0];
        
        //c=1   maxi=0
        
        //1  2  3  4 100 200
        //         p   i   
        
        for(int i=1;i<nums.size();i++){
            
            if(nums[i]==prev+1){
                count++;        
                prev=nums[i];
              maxi=max(maxi,count);
                
            }
            else if(nums[i]==prev){
                continue;
            }
            else{
                prev=nums[i];
                  maxi=max(maxi,count);
                count=1;
            }
        }
        return maxi;
    }
};