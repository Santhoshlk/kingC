// // rewriting the check digit code
//
// #include <stdio.h>
//
// int main(void) {
//     int d,i1,i2,i3,i4,i5,j1,j2,j3,j4,j5;
//
//     printf("Enter the UPC number:");
//     scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d,&i1,&i2,&i3,&i4,&i5,&j1,&j2,&j3,&j4,&j5);
//     const int  first_sum = d+i2+i4+j1+j3+j5;
//     const int second_sum = i1+i3+i5+j2+j4;
//     const int total =  3* first_sum+second_sum;
//     printf("Check sum  :%d\n",9-(total-1)%10);
// }