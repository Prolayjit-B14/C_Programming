#include<stdio.h>
int main(){
    int a,b,q,r;
    printf("Enter two number =");
    scanf("%d%d", &a,&b);
    q=a/b;
    r=a-b*q;
    printf("The reminder when %d is divisble by %d = %d", a,b,r);
    return 0;
}
