class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> m1;
        unordered_map<char,int> m2;

        for(char c1:ransomNote){
            m1[c1]++;
        }
        for(char c2:magazine){
            m2[c2]++;
        }

        for(auto it : m1){
            if(m2[it.first] < it.second){
                return false;
            }
        }
        return true;
    }
};
