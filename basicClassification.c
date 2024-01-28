#include "NumClass.h"


int isPrime(int num){
    if (num == 4) return 0;    
    for (int i = 2; i < num/2; i++){
        if (num == 2 || num == 3 || num == 5){
            return 1;
        }
        
        if (num % i == 0){
            return 0;
        }    
    }
    return 1;
}



int isStrong(int num){
    int num_d = number_of_digits(num);
    int factorial_d = 0;
    int num1 = num;
    int sum = 0;

    for (int i = 0; i < num_d; i++){
        factorial_d = factorial(num1 % 10);
        sum = sum + factorial_d;
        num1 = num1 / 10;
    }
    if(sum == num) return 1;
    return 0;
}

int number_of_digits(int num){
    int count = 0;
    while (num != 0){
        num = num / 10;
        count = count + 1;
    }
    return count;    
}

int power(int base, int hezka){
    int sum = 1;
    for (int i = 0; i < hezka; i++){
        sum = sum*base;
    } 
    return sum;
}


int factorial(int num) {
    int result = 1;

    // Calculate factorial
    while (num > 1) {
        result = num * result;
        num--;
    }
    return result;
}

int isPalindromeHelp(int num, int length) {
    // Base case
    if (length <= 1) {
        return 1;
    }
    // Calculate the divisor based on the length of the number
    int diviser = 1;
    for (int i = 1; i < length; i++) {
        diviser *= 10;
    }
    // Check if the first and last digits are equal
    if ((num / diviser) % 10 != num % 10) {
        return 0;  // Not a palindrome
    }
    // Update values for the recursive call
    num = (num % diviser) / 10;
    // Recursive call with the updated values
    return isPalindromeHelp(num, length - 2);
}








