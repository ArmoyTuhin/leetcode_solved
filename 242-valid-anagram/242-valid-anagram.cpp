class Solution {
public:
    bool isAnagram(string s, string t) {
        int slen= s.size() , tlen = t.size();
        if(slen!=tlen) return false;
        unordered_map<char, int> mp;
        for(int i=0 ; i<slen; i++)
        {
            mp[s[i]]++;
            mp[t[i]]--;
        }
        for(auto it: mp)
        {
            if(it.second) return false;
        }
        return true;
    }
};