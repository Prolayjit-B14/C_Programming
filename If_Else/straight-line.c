#include<stdio.h>
int main(){
    int x1,x2,x3, y1,y2,y3,m1,m2;

    printf("Enter 1st coordinate x1,x2 =\n");
    scanf("%d%d",&x1,&y1);

    printf("Enter 2nd coordinate x1,x2 =\n");
    scanf("%d%d",&x2,&y2);

    printf("Enter 3rd coordinate x3,x3 =\n");
    scanf("%d%d",&x3,&y3);

    m1 =(y2-y1)/(x2-x1);
    m2 =(y3-y2)/(x3-x2);
    if (m1 == m2){
        printf("Straight Line");
    }
    else{
        printf("Not a staright line");
    }
    return 0;
}