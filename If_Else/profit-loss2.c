#include <stdio.h>
int main (){
    int p,l;
    int cost;
    printf("Enter cost =");
    scanf("%d",&cost);

    int sell;
    printf("Enter sell =");
    scanf("%d",&sell);
    
    p = sell - cost;
    l = cost - sell;
    if(cost < sell){
        printf("Profit %d",p);
        }
    else if(sell < cost){
        printf("Loss %d",l);
        }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}