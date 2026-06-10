// #include <stdio.h>
//
// int main(void) {
//     int value;
//     printf("Enter the value :");
//     scanf("%d",&value);
//     // 20 denominations
//     const int v1 = (value -value % 20)/20;
//     value = value%20;
//     const int v2 = (value -value % 10)/10;
//     value = value%10;
//     const int v3 = (value -value % 5)/5;
//     value = value%5;
//     const int v4 = (value -value % 1)/1;
//     value = value%1;
//
//     printf("$20 bills :%d\n $10 bills : %d\n $5 bills :%d\n $1 bills :%d\n",v1,v2,v3,v4);
// }