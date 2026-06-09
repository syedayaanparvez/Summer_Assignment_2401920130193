class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int ans=1;
        int l=0;
        vector<int> freq(256,0);
        if(n==0)
        return 0;

        for(int r=0;r<n;r++){
            freq[s[r]]++;
            while(freq[s[r]]>1){
                freq[s[l]]--;
                l++;
            }
            ans=max(ans,r-l+1);
        }
        return ans;
    }
};
