//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&a, int n)
    {   
        
        int maxi=0;
        unordered_map<int,int>mp;
        int cur=0;
        
        // mp 15- 0  , 
        
        
        for(int i=0;i<n;i++){
           
           cur+=a[i];
           
           if(mp.find(cur)!=mp.end()){
               
               int d=i-mp[cur];
               
               maxi=max(maxi,d);
           }
           
           if(cur==0){
               maxi=i+1;
           }
           if(mp.find(cur)==mp.end()){
               mp[cur]=i;
           }
        }
        
        return maxi;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends