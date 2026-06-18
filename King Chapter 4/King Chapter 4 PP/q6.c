// // rewriting the check digit code
//
// #include <stdio.h>
//
// int main(void) {
//     int i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12;
//
//     printf("Enter the EAN number:");
//     scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&i1,&i2,&i3,&i4,&i5,&i6,&i7,&i8,&i9,&i10,&i11,&i12);
//     const int  first_sum = i2+i4+i6+i8+i10+i12;
//     const int second_sum = i1+i3+i5+i7+i9;
//     const int total =  3* first_sum+second_sum;
//     printf("Check sum  :%d\n",9-(total-1)%10);
// }