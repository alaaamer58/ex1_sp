#include <stdio.h>
#include "NumClass.h"
int true = 1, false = 0;
int isStrong (int num)
{
    double sum = 0;
    for (size_t i = num; i >0; i/10)
    {
        int f = factorial(i%10);
        sum += f;
    }
    if (sum == num)
    {
        return true; 
    }
    return false;    
}
int factorial (int n)
{
    int sum = 1;
    for (size_t i = 2; i <= n; i++)
    {
        sum*= i;
    }
    return sum;
}
int isPrime (int num)
{
    if (num <= 2)
    {
        return true;
    }
    for (size_t i = 2; i*i < num; i++)
    {
        if (num%i == 0)
        {
            return false;
        }
    }
    return true;
}







// int main ()
// {
//     int true =1, false = 0;
//     if (isArmstrong(145)==true)
//     {
//         printf("the num is astrong numer");
//     }
//     else
//     {
//         printf("the num is not astrong numer");
//     }
//     if (isPrime(19)==true)
//     {
//         printf("the num is a prime number");
//     }
//     else
//     {
//          printf("the num is not a prime number");
//     }   
//     return 0; 
// }
