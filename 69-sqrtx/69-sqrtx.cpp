class Solution {
public:
    int mySqrt(int x) {
        int low = 0, high =x;
        double mid ;
        while(low<=high)
        {
            mid = low+(high-low)/2;
            if(mid*mid<x) low=mid+1;
            else if (mid*mid>x) high = mid-1;
            else return mid;
        }
        return low-1;
    }
};