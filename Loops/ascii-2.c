#include <stdio.h>
int main (){

    for(int i = 65 ; i <= 90 ; i++){
        printf("%d ASCII Value is : ",i);
        char ch = (char)i;
        printf("%c\n",ch);
    }
    return 0;
}

