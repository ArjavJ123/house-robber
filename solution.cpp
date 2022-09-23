class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> t(n+1);
        if(n == 1) {
            return nums[0];
        }
        if(n == 2) {
            return max(nums[0],nums[1]);
        }
        t[n] = 0;
        t[n-1] = nums[n-1];
        for(int i=n-2; i>=0; i--) {
            t[i] = max(t[i+1], t[i+2] + nums[i]);
        }
        return t[0];
    }
};
