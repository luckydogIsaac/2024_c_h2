#include <stdio.h>
int area(int h,int w){
    return h * w;
}
int main()
{
    int h,w;
    printf("please input int h:");
    scanf("%d",&h);
    printf("please intput w:");
    scanf("%d",&w);
    printf("h= %d, w= %d",h,w);
    printf("area = %d\n",area(h,w));
    

    return 0;
}
