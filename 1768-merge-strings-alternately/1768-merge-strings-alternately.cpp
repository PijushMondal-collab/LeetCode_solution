class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int left=0;
        int right=0;
        string s="";
        while(left<word1.size() || right<word2.size()){
            if(left<word1.size()){
                s.push_back(word1[left++]);
            }
            if(right<word2.size()){
                s.push_back(word2[right++]);
            }
        }
        
        return s;

    }
};