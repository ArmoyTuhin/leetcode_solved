class Solution {
public:
    int firstPos(vector<int>& nums, int target)
{
    int start = 0;
    int end = nums.size()-1;
    int res = -1;
    while(start<=end)
    {
        int mid = start + (end-start)/2 ;
        if(nums[mid]==target)
        {
           res = mid ;
           end = mid-1 ;
        }
        else if(target>nums[mid])
        {
            start = mid+1;
    
        }
        else end = mid - 1 ;
    }
    return res;
}
int lastPos(vector<int>& nums, int target)
{
    int start = 0;
    int end = nums.size()-1 ;
    cout<<end<<endl;
    int res = -1;
    while(start<=end)
    {
        int mid = start + (end-start)/2 ;
        if(nums[mid]==target)
        {
           res = mid ;
           start = mid+1 ;
           
        }
        else if(target>nums[mid])
        {
            start = mid+1;
        }
        else end = mid - 1 ;
    }
    return res;
}

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result(2,-1) ;
        if(nums.size()>0) {
            int r1 = firstPos(nums,target);
            result[0]=r1;
            int r2 = lastPos(nums,target) ;
            result[1]= r2;
            return result;
        }
        else return result ;
    }
};