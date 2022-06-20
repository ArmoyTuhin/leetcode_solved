class Solution {
public:
    bool isPowerOfFour(int n) {
        return n>0 && (n & n-1)==0 && n%3==1 ;
        // we know 4%3=1 16%3=1 , so first of yoyu have to check that is it power of two then check it power of four
    }
};