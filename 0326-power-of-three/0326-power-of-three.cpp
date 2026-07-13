class Solution {
public:
    bool isPowerOfThree(int n) {
        int isPower=0;
        for(int i=0; i<31;i++){

            if(pow(3,i)==n){
                isPower=1;
                break;
            }
        }
        return isPower;
    }
};