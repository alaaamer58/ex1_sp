#include<stdio.h>
#include"NumClass.h"
int power(int base, int exponent) {
    if (exponent == 0) {
        return 1;
    }
    return base * power(base, exponent - 1);
}

int isArmstrongRecursive(int x, int n) {
    if (x == 0) {
        return 0;
    }
    return power(x % 10, n) + isArmstrongRecursive(x / 10, n);
}

int isArmstrong(int x) {
    int n = 0;
    int temp = x;
    
    while (temp != 0) {
        temp /= 10;
        n++;
    }
    
    return isArmstrongRecursive(x, n) == x;
}

int reverseNumber(int num, int rev) {
    if (num == 0) {
        return rev;
    }
    return reverseNumber(num / 10, rev * 10 + num % 10);
}

int isPalindrome(int num) {
    return reverseNumber(num, 0) == num;
}