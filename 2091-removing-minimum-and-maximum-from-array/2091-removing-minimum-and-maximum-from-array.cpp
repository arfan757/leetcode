class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int i = min_element(nums.begin(), nums.end()) - nums.begin();
        int j = max_element(nums.begin(), nums.end()) - nums.begin();

        int small = min(i, j), large = max(i, j);

        int front = large + 1;            
        int back  = n - small;             
        int both  = (small + 1) + (n - large); 

        return min({front, back, both});
    }
};