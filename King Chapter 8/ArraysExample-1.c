// arrays size has to be declared
// array will be defined in runtime
// //typename name[number of elements];

// for the book  better practice is #define N size; is a good practice for a standard size array

// #include <stdio.h>
// #define N 5
//
// int main(void) {
//     int array[N];
//     //o(1) access time
//     for (int i=0;i<N;i++) {
//
//         scanf("%d",&array[i]);
//     }
//
//     printf("The elements of an array act like individual variables %d\n",++array[0]);
//     // u can also use integer expression as an array subscript
// }