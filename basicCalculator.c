#include <stdio.h>
int main(){
    int a;
    int b;
    int d;
    printf("Welcome to the Sum Calculator!\n");
    printf("Type the integer numbers you would like to add!\n");
    scanf("%d%d", &a, &b);
    d = (int) (a+b);  
    printf("Added number is %d", d);

    return 0;
}