class Solution {
public:  bool located(char ch, string str) {
       for( auto it : str)
       {
           if(ch == it) return true;
       }
       return false;
   }
public:
    bool checkIfPangram(string sentence) {
        bool flag = 0;
        for(char ch='a'; ch<='z'; ch++)
        {
            if(located(ch,sentence))
            {
                flag = 1;
            }
            else {
                flag = 0;
                break;
            }
        }
        return flag;
    }
      
    
};