class Solution {
public:
    bool isPalindrome(int x) {

        if(x < 0) return 0;

        int y = x;
        long long check = 0;
        int rem = 0;

        while(y!=0){
            rem = y%10;
            check = (check*10) + rem;
            y /= 10;
        }

       return (x==check);
    }
};