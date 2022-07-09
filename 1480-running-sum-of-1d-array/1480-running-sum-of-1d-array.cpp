class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> sum;
        int temp=0 ;
        for(auto i: nums)
        {
            temp+=i;
            sum.push_back(temp);
        }
        return sum ;
    }
};