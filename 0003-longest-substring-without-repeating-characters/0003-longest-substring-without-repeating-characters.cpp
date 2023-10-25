class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_map<int,int>mp;
       
        int n=s.length();
        if(n==0)return 0;
        
        int j=0;
        int maxi=INT_MIN;
        
        for(int i=0;i<n;i++){
            
            //acquire 
               
          mp[s[i]]++;
            
            //check if currently illegal
            
            if(mp[s[i]]>1 ) {
                
                //if yes ....start removing from j ie left
                
                while( j<i && mp[s[i]]>1 ){
                    
                    mp[s[j]]--;
                    // if(mp[s[j]]==0)mp.erase(s[j]);
                    j++;
                    
                }
               
            }
             maxi=max(maxi,i-j+1);
             
            
        }
        return maxi;
        
//         Time Complexity: O( 2*N ) (sometimes left and right both have to travel a complete array)

//         Space Complexity: O(N) where N is the size of HashSet taken for storing the elements
    }
};                                                                                                                                             