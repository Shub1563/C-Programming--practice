/* Any year is input through the keyboard. Write 
a program to determine whether the year is a leap 
year or not. (Considering leap year occurs after 
every 4 years)sss
*/
#include<stdio.h>
int main(){
     int year;
     printf("enter the year: ");
     scanf("%d",&year);
     if((year%4==0)||(year%100!=0&&year%400==0)){

        printf("leap year");
     }
    else{
        printf("not a leap year");
    }
    return 0;
}
