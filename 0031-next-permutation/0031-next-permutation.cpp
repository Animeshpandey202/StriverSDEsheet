class Solution {
    private:
    void swap(int i,int j,vector<int>&nums){
        int temp=0;
        temp=nums[j];
        nums[j]=nums[i];
        nums[i]=temp;
    }
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int breakpoint=-1,i=n-2;

        while(i>=0){
            
            if(nums[i]>=nums[i+1]){
                i--;
            }
            else{
                breakpoint=i;
                break;
            }
        }
        if(breakpoint!=-1){
              for(int j=n-1;j>breakpoint;j--){
            
                if(nums[j]>nums[breakpoint]){
                    swap(breakpoint,j,nums);
                    break;
                }
             }
            
             reverse(nums.begin()+breakpoint+1,nums.end());
        }
        else{
              reverse(nums.begin(),nums.end());
        }
        
      
    }
};