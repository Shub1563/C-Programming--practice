/*If the ages of Ram, Shyam and Ajay are input 
through the keyboard, write a program to 
determine the youngest of the three
*/
#include<stdio.h>
int main(){
     int ram,shyam,ajay;
     printf("enter the age of ram: ");
     scanf("%d",&ram);
     printf("enter the age of shyam: ");
     scanf("%d",&shyam);
     printf("enter the age of ajay: ");
     scanf("%d",&ajay);

     if(ram<shyam)
         {if(ram<ajay){
            printf("ram is youngest");
         }
        else{
            printf("ajay is youngest");
        }
     }
      else if(shyam<ajay){
        printf("shyam is youngest");
      }
      else{
        printf("ajay is youngest");
      }

     return 0;
}
