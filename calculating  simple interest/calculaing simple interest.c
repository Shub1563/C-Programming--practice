#include<stdio.h>
int main(){
   float  principal,rate,time,SI;
   printf("enter the value of principal\n:");
   scanf("%f",&principal);
   printf("enter the value of rate\n:");
   scanf("%f",&rate);
   printf("enter the value of time\n:");
   scanf("%f",&time);

   SI=(principal*rate*time)/100;

   printf("simple interest is:%f",SI);



    return 0;

}
