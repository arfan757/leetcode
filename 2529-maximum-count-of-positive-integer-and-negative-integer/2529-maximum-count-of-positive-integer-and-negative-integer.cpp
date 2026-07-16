class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int size = nums.size();
        int low = 0, high = size-1, mid, index;

        if(nums[0] > 0 || nums[size-1] < 0 ){
            return size;
        }

        index = size; 
        while(low<=high){
            mid = low + (high-low)/2;

            if(nums[mid] <= 0){
                low = mid+1;
            }    
            else{
                index = mid;
                high = mid-1;
            }
        }

        int pos = size - index;
        low = 0;
        high = index;

        while(low<=high){
            mid = low + (high-low)/2;

            if(nums[mid] < 0){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }

        int neg = high+1;
        return max(pos,neg);
    }
};