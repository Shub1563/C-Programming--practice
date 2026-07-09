/*Print the table of ‘n’. Here ‘n’ is a integer 
which user will input*/
#include<stdio.h>
int main(){
    int n;
    printf("enter the number that table  is printed:");
    scanf("%d",&n);
    for(int i=n;i<=(10*n);i=i+n){
        printf("%d\n",i);
    }

    return 0;
}
