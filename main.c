#include<stdio.h>
#include<stdbool.h>
#include"NumClass.h"
void main ()
{
    int min , max;
    printf("please enter two number:");
    scanf("%d",&min);
    scanf("%d", &max);
    int pCount=0, paliCount=0, armCount=0 , sCount=0;
    for (size_t i = min; i <= max; i++)
    {
        if (isArmstrong(i))
        {
            armCount++;
        }
        if (isPalindrome(i))
        {
            paliCount++;
        }
        if (isPrime(i))
        {
            pCount++;
        }
        if (isStrong(i))
        {
            sCount++;
        }
    }
    int primeNumbers [pCount];
    int palindromeNumbers [paliCount];
    int strongNumbers[sCount];
    int armstrongNumbers [armCount];
    int armstrong = 0 , prime = 0 , palindrome = 0 , strong = 0 ;
    for (size_t i = min; i <= max; i++)
    {
        if (isArmstrong(i))
        {
            armstrongNumbers[armstrong] = i;
            armstrong++;
        }
        if (isPalindrome(i))
        {
            palindromeNumbers[palindrome] = i;
            palindrome++;
        }
        if (isPrime(i))
        {
            primeNumbers[prime] = i;
            prime++;
        }
        if (isStrong(i))
        {
            strongNumbers[strong] = i;
            strong++;
        }
    }
}