class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxElement = *max_element(nums.begin(), nums.end());
        int size=nums.size(), count=0;

        for(int i = 0; i<size; i++){
            if(nums[i] < maxElement){
                count = count + (maxElement-nums[i]);
            }
        }
        return count;
    }
    
};