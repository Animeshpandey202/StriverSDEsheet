class Solution {
public:
    double myPow(double x, int n) {
        
        long n1;
        if(n<0)n1=long(n)*(-1);
        else n1=n;
        double ans=1;
        while(n1>0){
            
            if(n1%2==0){
                n1=n1/2;
                x=x*x;
            }
            else{
                n1=n1-1;
                ans=ans*x;
            }
        }
        
        if(n<0)return 1/ans;
        return ans;
        
    }
};