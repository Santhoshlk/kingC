// #include <stdio.h>
//
// int main(void) {
//     int decimal;
//     printf("Enter the number between 0 and 32767 :");
//     scanf("%d",&decimal);
//     int octreverse = 0;
//       while (decimal>0) {
//           const int remainder = decimal%8;
//           octreverse = octreverse*10+remainder;
//           decimal/=8;
//       }
//
//     int answer = 0;
//     while (octreverse>0) {
//       const  int ld = octreverse%10;
//          answer= answer*10+ld;
//        octreverse /=10; // decrement
//     }
//
//     printf("In octal , your number is %.5d\n",answer);
// }
