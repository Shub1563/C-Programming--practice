#include<stdio.h>
int main(){
  float hindi,english,maths,science,sst,sanskrit;
  printf("ennter the marks of hindi:\n");
  scanf("%f",&hindi);
  printf("ennter the marks of english:\n");
  scanf("%f",&english);
  printf("ennter the marks of maths:\n");
  scanf("%f",&maths);
  printf("ennter the marks of science:\n");
  scanf("%f",&science);
  printf("ennter the marks of sst:\n");
  scanf("%f",&sst);
  printf("ennter the marks of sanskrit:\n");
  scanf("%f",&sanskrit);

  float percentage=(maths+hindi+english+science+sanskrit+sst)/6.0;

  printf("percentage of student is:%f",percentage);



 return 0;
}
