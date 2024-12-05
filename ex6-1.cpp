#include <stdio.h>

int main()
{
    int a,b;
    printf("Please input a =");
    scanf("%d",&a);
    printf("Please input b =");
    scanf("%d",&b);
    if(a > b){
        printf("a > b");
    }else if (a < b){
        printf("a < b");
    }else{
        printf("a == b");
    }
       
    
    

    return 0;
}
