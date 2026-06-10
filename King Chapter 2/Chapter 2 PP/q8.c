//  #include <stdio.h>
// //
//
//   int main(void) {
//      float loan, mp,ir;
//     printf("Enter the amount of loan :");
//      scanf("%f",&loan);
//      printf("Enter the amount of Interest :");
//      scanf("%f",&ir);
//
//      float cbalance = loan;
//      printf("Enter the amount of monthly payment :");
//      scanf("%f",&mp);
//
//      for (int i=1;i<=12;i++) {
//
//          float deduction = mp -cbalance*(ir/12.f)/100.f;
//          cbalance-=deduction;
//          printf("The balance after the %d payment is %.2f\n",i ,cbalance);
//      }
//
//
// }