/* Take input percentage of a student and 
print the Grade according to marks
*/
#include<stdio.h>
int main(){
     int percent;
     printf("enter the percentage of student:");
     scanf("%d",&percent);d
     
    if(percent>=90&&percent<=100){
        printf("excellent");
    }
    else if(percent>=80&&percent<90){
        printf("very good");
    }
    else if(percent>=70&&percent<80){
        printf("good");
    }
    else if(percent>=60&&percent<70){
        printf("you can do better");
    }
    else if(percent>=50&&percent<60){
        printf("average");;
    }
    else if(percent>=40&&percent<50){
        printf("below average");
    }
    else if(percent>=0&&percent<40){
        printf("fail");
    }
    else{
        printf("input error");
    }

    return 0;
}
