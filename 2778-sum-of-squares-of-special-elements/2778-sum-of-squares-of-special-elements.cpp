class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int size = nums.size();
        int count =0 ;

        for(int i=0; i<size; i++){
            if(size % (i+1) == 0){
                count += (nums[i]*nums[i]);
            }
        }
        return count;
    }
};