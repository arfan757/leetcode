class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int l = 0, orSum = 0, maxLen = 0;
        int n = nums.size();

        for (int r = 0; r < n; r++) {
            
            while (orSum & nums[r]) {
                orSum ^= nums[l]; 
                l++;
            }
            orSum |= nums[r];
            maxLen = max(maxLen, r - l + 1);
        }
        return maxLen;
    }
};