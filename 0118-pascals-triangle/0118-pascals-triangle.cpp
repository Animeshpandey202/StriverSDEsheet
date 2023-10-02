class Solution {
public:
    vector<vector<int>> generate(int n) {
        
        //time for print all elements of n rows=O(n^2) space=O(n^2)
        vector<vector<int>> r(n);
        for(int i=0;i<n;i++){
            
            r[i].resize(i+1);
            r[i][0]=r[i][i]=1;
            
            for(int j=1;j<i;j++){
                r[i][j]= r[i-1][j-1]+r[i-1][j];
            }
        }
        return r;
        
        //to print an element of pascal t nth row rth column= formula (n-1Cr-1 )t=O(n) s=O(n)
//          long long res = 1;

//         // calculating nCr:
//         for (int i = 0; i < r; i++) {
//             res = res * (n - i);
//             res = res / (i + 1);
//         }
//         return (int)(res);

    
    }
};