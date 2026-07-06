/* Given the length and breadth of a rectangle, 
write a program to find whether the area of the 
rectangle is greater than its perimeter
*/
#include<stdio.h>
int main(){
     float len,breadth;
     printf("enter the length:");
     scanf("%f",&len);
     printf("enter the breadth:");
     scanf("%f",&breadth);
     float area=len*breadth;
     float perimeter=2*(len+breadth);

     if(area>perimeter){
        printf("area is large");
     }
     else if(area==perimeter){
        printf("area and perimeter are equal");
     }
     else {
        printf("perimeter is large ");
     }







    return 0;
}
