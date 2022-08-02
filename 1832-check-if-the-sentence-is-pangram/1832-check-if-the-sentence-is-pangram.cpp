class Solution {
public:
    bool checkIfPangram(string sentence) {
        bool al[26] ={};
        for(int i = 0 ; i<sentence.size() ; i++)
        {
            al[sentence[i]-'a'] = true ; //marking true if a leeter exists
        }
        for(int i= 0 ; i<26 ; i++)
        {
            if(!al[i]) return false ; //if a letter exists in array or not
        }
        return true;
    }
};