class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        
        //apply bs on 2d matrix....then row= mid/m col =mid% m
        int low=0;
        int high=n*m-1;
        
        while(low<=high){
            
            int mid=(low+high)/2;
            
            int row=mid/m;
            int col=mid%m;
            
            int no=matrix[row][col];
            
            if(no==target){
                return true;
            }
            else if(no> target){
                high=mid-1;
                
            }
            else{
                low=mid+1;
            }
            
        }
        return false;
        
    }
};