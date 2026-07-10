/*WAP to check if a number is prime or 
not */
#include<stdio.h>
int main(){
   int n;
   printf("enter the value of n:");
   scanf("%d",&n);
   int a=0;
   if(n<=1)
   {
    printf("neither prime nor composite\n");
    return 0;
   }
   for(int i=2;i<n;i++)
   {
       if(n%i==0){
        a=1;
       break;
       }  
   }
   if(a==0)
   { printf("number is prime\n");
   }
   else{
    printf("number is composite\n");
   }

    return 0;
}
