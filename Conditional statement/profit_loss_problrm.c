/*If cost price and selling price of an item is 
input through the keyboard, write a program to 
determine whether the seller has made profit or 
incurred loss. Also determine how much profit he 
made or loss he incurred
*/
#include<stdio.h>
int main(){

   float cost_p,sell_p;
   printf("enter the cost price: ");
   scanf("%f",&cost_p);
   printf("enter the selling price: ");
   scanf("%f",&sell_p);

   if(sell_p>cost_p){
     float profit=sell_p-cost_p;
     printf("profit is %f ",profit);

   }
   else if((sell_p-cost_p)==0){

         printf("neither profit nor loss");
   }
   else{
    float loss=cost_p-sell_p;
    printf("loss is %f",loss);
   }

    return 0;

}
