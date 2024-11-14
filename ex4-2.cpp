#include <stdio.h>

int main()
{
    int x,y;

    printf("please input int x=");
    scanf("%d",&x);
    printf("please input y=");
    scanf("%d",&y);
    printf("x+y=%d\n",x+y);
    printf("x-y=%d\n",x-y);
    printf("x*y=%d\n",x*y);
    printf("x/y=%d\n",x/y);
    printf("x mod y=%d\n",x%y);
    printf("x==%d\n",x==y );
    x += 3;
    printf("x>10 && y < 5%d\n",x>10 && y < 5 );
    
    
    return 0;
}
