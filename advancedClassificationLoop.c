#include <stdio.h>
#include "NumClass.h"
#include <stdbool.h>
int isArmstrong (int x) 
{
    int sum = 0;
    size_t i = x;
    for (; i > 10; i/10)
    {
        sum += i %10 ;
    }
    sum+=i;
    if (sum == x)
    {
        return 1;
    }
    return 0;
}
int isPalindrome(int num)
{
    int rev = 0;
    for (size_t i = num; i >0; i/=10)
    {
        int d = i%10;
        rev = rev*10+d;
    }
    if (rev==num)
    {
        return 1;
    }
    return 0;
}