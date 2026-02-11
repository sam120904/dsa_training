#include <iostream>
class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1;
        int sum = 0;
        int i;
        while (n>0){
            int digit = n%10;
            sum = sum + digit;
            product = product*digit;
            n=n/10;
        }  
        int diff = product - sum;
        return diff; }
};