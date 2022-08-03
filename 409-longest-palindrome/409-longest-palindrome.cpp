class Solution {
public:
    int longestPalindrome(string s) {
        int count = 0;
        unordered_map<char, string> umap;       
        int len = s.length();
        for(int i=0; i<len; i++) {
            if(umap.find(s[i]) == umap.end())
                umap[s[i]] = "";
            else {
                umap.erase(s[i]);
                count += 2;
            }
        }        
        if(count == len)
            return count;
        return count+1;
    }
};