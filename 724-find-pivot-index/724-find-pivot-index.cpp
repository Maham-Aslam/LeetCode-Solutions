class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int len = nums.size();
        int sum = 0;
        int* prefix = new int[len];
        for(int i = 0; i < len; i++) {
            prefix[i] = sum;
            sum += nums[i];
        }
        for(int i = 0; i < len; i++) 
            if(prefix[i] == prefix[len - 1] - prefix[i] - nums[i] + nums[len - 1]) 
                return i;
        return -1;
    }
};