#include "NumClass.h"

//not recursive
int isAmstrong(int num) {
    int num_d = number_of_digits(num);
    int sum = 0;
    int num1 = num;
    while (num1 != 0) {
        int index_d = num1 % 10;
        sum += power(index_d, num_d);
        num1 /= 10;
    }
    return (sum == num);
}

int isPalindrome(int num) {
    int length = number_of_digits(num);
    return isPalindromeHelp(num, length);
}



