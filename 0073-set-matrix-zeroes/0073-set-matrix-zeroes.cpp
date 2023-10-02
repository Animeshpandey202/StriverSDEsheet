class Solution {
public:
    void setZeroes(vector<vector<int>>& a) {
        int n =a.size();
        int m = a[0].size();
        
        int col0=-1;
        
        //step1 traverse all matrix and make 0 in 1st row and col to keep track in which row or col 0 occured
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                
                if(a[i][j]==0){
                    
                      //mark row                      
                    a[i][0]=0;
                    if(j==0){
                        col0=0;
                    }
                    else {
                        a[0][j]=0;
                    }
                }
            }
        }
        
        //step 2 mark 0 acc to row0 and col0 from 2nd row and col
        
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                
                if(a[i][j]!=0){
                    
                    if(a[0][j]==0 || a[i][0]==0){
                        a[i][j]=0;
                    }
                    
                }
            
            }
        }
        
        //mark 0 for 1st row and 1st col from 1row and 1 col
        if(a[0][0]==0){
            //means 1 row all 0
            for(int i=0;i<m;i++){
                a[0][i]=0;
            }
        }
        if(col0==0){
            //means 1 col all 0
            for(int i=0;i<n;i++){
                a[i][0]=0;
            }
        }
  
    }
};