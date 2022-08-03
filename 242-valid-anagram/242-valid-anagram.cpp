class Solution {
public:
    bool isAnagram(string s, string t) {
        int slen = s.length() , tlen = t.length();
        unordered_map<char, int> mp;
        if(slen!=tlen) return false ;
        for(int i=0 ; i<slen ; i++)
        {
            mp[s[i]]++;
            mp[t[i]]--;
        }
        for(auto it: mp) {
            if(it.second) return false;
        }
        return true;
    }
};