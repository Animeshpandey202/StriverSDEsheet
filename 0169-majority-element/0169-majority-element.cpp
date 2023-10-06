class Solution {
public:
    int majorityElement(vector<int>& nums) {
     
        int count=0;
        int el;
        
        for(int i=0;i<nums.size();i++){
            
            
            //if no current majority element selected ie count=0
            //then select it and count++;
            
            if(count==0){
                el=nums[i];
                count++;    
            }
            else{
                if(nums[i]==el){
                    count++;
                }
                else{
                    count--;
                }
            }
        }
        int cnt=0;
        for(auto it:nums){
            if(it==el)cnt++;
        }
        if(cnt>nums.size()/2)return el;
        return -1;
        
        
    }
};