#include <stdio.h>
int main(){
    int a,b;
    int sum,dif,pr;
    float quo;

    printf("Enter a number:\n");
    scanf("%d",&a);
    printf("Enter another number:\n");
    scanf("%d",&b);

    sum=a+b;
    dif=a-b;
    pr=a*b;
    quo=a/b;
    
    printf("The sum is: %d\n",sum);
    printf("The difference is: %d\n",dif);
    printf("The product is: %d\n",pr);
    printf("The quotient is: %.2f\n",quo);
    
}
