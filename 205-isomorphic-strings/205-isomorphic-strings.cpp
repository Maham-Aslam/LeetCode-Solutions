class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> map;
        unordered_map<char, char>:: iterator itr;
        map[s[0]] = t[0];
        for (int i=1; i<s.length(); i++)
            if(map.find(s[i]) == map.end())
                for(itr = map.begin(); itr != map.end();)
                    if(itr->second!=t[i] && (++itr==map.end()))
                        map[s[i]] = t[i];
                    else if(itr->second==t[i])
                        break;  
        for (int i=0; i<s.length(); i++){
            itr = map.find(s[i]);
            if(itr==map.end())
                return false;
            s[i] = itr->second;               
        }    
        if(s == t)
            return true;       
        return false;
    }
};