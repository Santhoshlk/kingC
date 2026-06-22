// #include <stdio.h>
// #include <stdbool.h>
//
// int main(void) {
//   bool Digits_seen[10];
//   for (int i=0;i<10;i++) {
//     Digits_seen[i] = false;
//   }
//   long int n;
//   printf("Enter the element n :");
//   scanf("%ld",&n);
//
//   while (n>0) {
//     const int digit = n%10;
//     if (Digits_seen[digit]) {
//       printf("a digit is repeated\n");
//       break;
//     }
//     Digits_seen[digit] = true;
//     n=n/10;
//   }
//
//   if (n<=0) {
//     printf("Digits are not repeated \n");
//   }
// }