#include <stdio.h>

int main() {
    int n, i, Prime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) Prime = 0;
    
    for (i = 2; i <= n-1; i++) 
    {
        if (n % i == 0) 
        {
            Prime = 0;
            break;
        }
    }

    if (Prime==1)
        printf("%d is a Prime number\n", n);
    else
        printf("%d is NOT a Prime number\n", n);

    return 0;
}