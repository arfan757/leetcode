class Solution {
public:
    int fib(int n) {
        int a=0, b=1;
        int temp;

        if (n==0) return 0;
        if (n==1) return 1;

        for(int i=2 ; i<=n ; i++){
            temp=b;
            b = a+b;
            a = temp;
        }

    return b;
    }
};