class Solution {
public:
int lengthOfLongestSubstring(string s) {
unordered_map<char, int> mp;
int n = s.length();
int i = 0, j = 0;
int maxi = 0; // Initialize maxi to 0
​
while (i < n) {
// Acquire characters until a repeat is found
while (i < n && mp.find(s[i]) == mp.end()) {
mp[s[i]]++;
i++;
}
​
// Check if a repeat was found
if (mp.find(s[i]) != mp.end()) {
// Start removing characters from the left
while (j < i && mp.find(s[i]) != mp.end()) {
mp[s[j]]--;
if (mp[s[j]] == 0) mp.erase(s[j]);
j++;
}
}
​
maxi = max(maxi, i - j);
}
return maxi;
}
};
​
​
​
​
​
/////
class Solution {
public:
int lengthOfLongestSubstring(string str) {
​
if(str.size()==0)
return 0;
int maxans = INT_MIN;
for (int i = 0; i < str.length(); i++) // outer loop for traversing the string
{