#include <stdio.h>
int main (){
    int n;

    printf("Enter a Number : ");
    scanf("%d",&n);
    int sum = 0;
    //  sum of the series 1 - 2 + 3 - 4 + ... + n
    for(int i=1; i<=n; i++){
        if(i%2==0)sum = sum + i;
        else sum = sum - i;
    }
    printf("Sum : %d",sum);

    return 0;

}


