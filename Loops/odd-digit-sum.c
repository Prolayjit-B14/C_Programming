#include <stdio.h>
int main (){
    int n;
    int sum = 0;
    int LastDigit;
    printf("Enter a Number :");
    scanf("%d",&n);
    while(n!=0){
        LastDigit = n % 10;
        if (LastDigit % 2 == 1) {
            sum = sum + LastDigit;
        }
        n=n/10;
    }
    printf("Sum of Digits : %d\n", sum);
    return 0;
}
