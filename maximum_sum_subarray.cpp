class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr_sum=nums[0];
        int maxi_sum=nums[0];
        for(int i=1;i<(int)nums.size();i++){
            curr_sum=max(curr_sum+nums[i],nums[i]);
            maxi_sum=max(maxi_sum,curr_sum);
        }
        return maxi_sum;
    }
};
