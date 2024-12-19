#include <iostream>
int add(int a,int b){
  return a+b;    
}
int sub(int a,int b){
  return a-b;    
}
int mul(int a,int b){
  return a*b;    
}
int diyi(int a,int b){
  return a/b;    
}
int main()
{
  int a ,b ;
    printf("please input a =");
    scanf("%d",&a);
    printf("please input b =");
    scanf("%d",&b);
    printf("a+b = %d",add(a,b));
    printf("a-b = %d",sub(a,b));
    printf("a*b = %d",mul(a,b));
    printf("a/b = %d",diyi(a,b));
    return 0;

}
