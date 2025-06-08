
#include <stdio.h>
int main (){
    int n ;
    int reverse = 0;
    int LastDigit;
    int sum ;

    printf("Enter a Number : ");
    scanf("%d",&n);



    while(n!=0){
        LastDigit = n % 10;
        reverse = reverse*10 + LastDigit;
        n=n/10;
    }
    printf("Reverse of Digits : %d\n", reverse);


    return 0;

}


