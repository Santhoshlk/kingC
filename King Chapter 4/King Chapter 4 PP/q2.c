// // extend to handle any numbers
//
// #include <stdio.h>
//
// int main(void) {
//     int number;
//     printf("Enter the number:");
//     scanf("%d",&number);
//     int rd = 0;
//     while (number>0) {
//        const int ld = number%10;
//         rd = rd*10+ld;
//         number/=10; // decrement
//     }
//     printf("The reversed number is :%d\n",rd);
//
// }