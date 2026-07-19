class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int bits=0, count =0;

        for(int i=left; i<=right; i++){
            bits = __builtin_popcount(i);
            if(bits == 2 || bits == 3 || bits == 5 || bits == 7 || bits == 11 || bits == 13 || bits == 17 || bits == 19) count++;
        }
        return count;
    }    
};