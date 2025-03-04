//add include statements
#include "repetition.h"

//add function(s) code here
int factorial(int num){
    int result = 1;

    while (num > 0){
        result = result * num;
        num -= 1;
    }
    
    return result;
}

int gcd(int num1, int num2){

    while (num1 != num2){

        if (num1 < num2){
            int num3 = num1;
            num1 = num2;
            num2 = num3;
        }

        if (num1 > num2){
            num1 = num1 - num2;
        }
    }

    return num1;
}