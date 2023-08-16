class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int ans=0;
        int n=s.length();
        vector <int> charIndex(128, -1);
        int left=0;
        for(int right=0;right<n;right++)
        {
            
           if(charIndex[s[right]]>=left)
           {
             left=charIndex[s[right]]+1;
           }
           charIndex[s[right]]=right;
           ans=max(ans,right-left+1);
        }
          
    
        return ans;
    }
};
