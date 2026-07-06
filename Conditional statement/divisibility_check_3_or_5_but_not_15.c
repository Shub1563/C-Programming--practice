/* Take positive integer input and tell if it 
is divisible by 5 or 3 but not divisible by 15
*/
#include<stdio.h>
int main(){
      int num;
      printf("enter the number: ");
      scanf("%d",&num);
      if(num%3==0){
        if(num%15!=0){
            printf("number is divisible by 3 but not 15");
        }
      }
      else if(num%5==0){
        if(num!=0){
          printf("number is divisible by 5 but not 15");
        }
      }
      else{
        printf("number is not divisible by 5 and 3 ");
      }

    return 0;
}
