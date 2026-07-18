class Solution {
public:
    int findGCD(vector<int>& nums) {
        
        int mn=nums[0], mx=nums[0];
       int n = nums.size();

        for(int i=1; i<n; i++){
            if(nums[i]<mn){
                mn = nums[i];
            }
            if(nums[i]>mx){
                mx = nums[i];
            }
        }

        return gcd(mx,mn);
    }
};