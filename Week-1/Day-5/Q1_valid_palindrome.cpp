class Solution {
public:
    bool isPalindrome(string s) {
        string ans="";
        for(char ch:s){
            if(isalnum(ch)){
                ans+=tolower(ch);
            }
        }
        int start=0;
        int end=ans.size()-1;
        while(start<end){
            if(ans[start]!=ans[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};
