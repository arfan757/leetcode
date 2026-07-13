class Solution {
public:
    bool isPowerOfTwo(int n) {

    int isPrime=0;
        for(int i=0; i<31;i++){

            if(pow(2,i)==n){
                isPrime=1;
                break;
            }
        }
        return isPrime;
    }
};