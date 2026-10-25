#include <stdio.h>
int main() {
    int n1, n2;
    char ch;

    printf("Enter a number: ");
    scanf("%d",&n1);
    printf("Enter another number: ");
    scanf("%d",&n2);
    printf("Enter the operation symbol(+,-,*,/): ");
    scanf(" %c",&ch);

    switch(ch){
        case '+':
        printf("The result is: %d",n1+n2);
        break;

        case '-':
        printf("The result is: %d",n1-n2);
        break;

        case '*':
        printf("The result is: %d",n1*n2);
        break;

        case '/':
        printf("The result is: %d",n1/n2);
        break;
    }

    return 0;
}
