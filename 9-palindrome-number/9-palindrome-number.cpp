class Solution {
public:
    // 2147483647
    bool isPalindrome(int x) {
        if(x<0 || x>=pow(2,31)) return false ;
        long int n = 0 ;
        int y = x;
        while(x>0){
            n*=10;
            if(n> pow(2,31)) return false;
            n+=(x%10);
            x/=10;
        }
        if (n==y) return true;
        else return false ;
    }
};

