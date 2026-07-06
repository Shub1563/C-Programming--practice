/* Take positive integer input and tell if it 
is a three digit number or not
*/
#include<stdio.h>
int main(){

     int num;
     printf("enter number: ");
     scanf("%d",&num);
        if(num>=100&&num<=999){

            printf("number is three digit");

        }
        else{
            printf("number is not three digit");
        }


    return 0;
}
