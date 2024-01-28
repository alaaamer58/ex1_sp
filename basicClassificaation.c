#include <stdio.h>
#include "NumClass.h"
#include <stdbool.h>
int isPrime (int num)
{
    if (num <= 2)
    {
        return 1;
    }
    for (size_t i = 2; i*i+1 < num; i++)
    {
        if (num%i == 0)
        {
            return  0;
        }
    }
    return 1;
}
int facturial(int number){
    if(number==0 || number==1){
        return 1;
    }
    else{
        return number*facturial(number-1);
    }
}

int isStrong(int n){
    int number =n;
    int sum=0;
    while(number!=0){
        sum += facturial(number%10);
        number /=10;
    }
    if(sum==n){return 1;}
    return 0;
}