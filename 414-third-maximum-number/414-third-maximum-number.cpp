class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> val;
        std::sort(nums.begin(),nums.end());
        std::reverse(nums.begin(),nums.end());
        for(int i=0 ; i<nums.size(); i++)
        {
            val.insert(nums[i]);
            if(val.size()==3)
            {
                return nums[i];
            }
        }
        
        return *std::prev(val.end());
    }
};