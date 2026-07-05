/* Take integer input and print the 
absolute value of that integer
*/
#include<stdio.h>
int main(){
      int num;
      printf("enter the integer: ");
      scanf("%d",&num);

      if(num>0){
           printf("integer is already positive");  
      }
      else if(num==0){
        printf("integer is neither positive nor negative ");
      }
      else{
        num*=(-1);
        printf("%d",num);
      }

    return 0;
}
