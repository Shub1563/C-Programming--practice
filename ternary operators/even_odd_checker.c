
// even and  odd  checker
#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    //exp1 ? exp2 : exp3
    n%2==0?printf("even number"):printf("odd number");

    return 0;
}
