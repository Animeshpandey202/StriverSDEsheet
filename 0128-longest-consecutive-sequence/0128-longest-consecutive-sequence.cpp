
class Solution
{
public:
    int longestConsecutive(vector<int> &a){
        unordered_set<int>st;
        
        for(auto it:a){
            
            st.insert(it);
        }
        
        int count=0;
        int ans=0;
        
        for(auto i:st){
            
            if (st.find(i-1) == st.end()) { // isse kam element nahi hai
                
                count=1;
                while(st.find(i+1)!=st.end()){
                    
                    i=i+1;
                    count++;
                }
            
            }
            ans=max(ans,count);
            
            
            
        }
        return ans;
        
        
        
        
  
    }
};






























