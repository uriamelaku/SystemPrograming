#include "NumClass.h"

int isAmstrong(int num){
    int num_d = number_of_digits(num);
    int index_d = 0;
    int sum = 0;
    int num1 = num;
    while (num1 != 0){
        index_d = num1 % 10;
        sum = sum + power(num_d, index_d);
        num1 = num1 / 10;
    }
    if(sum == num) return 1;
    return 0;
}


int isPalindrome(int num){
    int length = number_of_digits(num) / 2;
    int diviser = 1;
    int num1, num2 = num;
    for(int i=0; i<number_of_digits(num) - 1; i++){
        diviser = diviser * 10;
    }
    for (int i = 0; i < length; i++){
        if((num1/diviser)%10 != num2%10){
            return 0;
        }
        num2 = num2 / 10;
        num1 = num;
        diviser = diviser / 10;
    }
    return 1;
}
