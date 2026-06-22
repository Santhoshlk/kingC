// #include <stdio.h>
//
// int main(void) {
//     int income;
//     printf("Enter the amount of taxable income :");
//     scanf("%d",&income);
//
//     if (income<=750) {
//         printf("The amount of tax is : %.2f\n",1.0*income/100.0);
//     }
//     else if (income<=2250) {
//         printf("The amount of tax is : %.2f\n",2.0*(income-750)/100.0+7.50);
//     }
//     else if (income<=3750) {
//         printf("The amount of tax is : %.2f\n",3.0*(income-2250)/100.0+37.50);
//     }
//     else if (income<=5250) {
//         printf("The amount of tax is : %.2f\n",4.0*(income-3750)/100.0+82.50);
//     }
//     else if (income<=7000) {
//         printf("The amount of tax is : %.2f\n",5.0*(income-5250)/100.0+142.50);
//     }
//     else {
//         printf("The amount of tax is : %.2f\n",6.0*(income-7000)/100.0+230.00);
//     }
// }