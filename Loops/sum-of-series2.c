#include <stdio.h>
int main (){
    int n;

    printf("Enter a Number : ");
    scanf("%d",&n);
    int sum = 0;
    //  sum of the series 1 - 2 + 3 - 4 + ... + n


        if(n%2==0){
            sum = -n/2;
        }
        else{
            sum = -n/2 +n;
        }
    
    printf("Sum : %d",sum);

    return 0;

}


