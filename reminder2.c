#include<stdio.h>
int main(){
    int a,b,r;
    printf("Enter two number =");
    scanf("%d%d", &a,&b);
    r=a%b;
    printf("The reminder when %d is divisble by %d = %d", a,b,r);
    return 0;
}
