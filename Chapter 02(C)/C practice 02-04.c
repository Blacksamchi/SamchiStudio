#include<studio.h>
int main(void)
{
  int a, b;
  printf("정수 2개를 입력해\n");
  printf("정수 A:\n"); scanf("%d",&a);
  printf("정수 B:\n"); scanf("%d",&b);

  printf("정수 A와 B의 합은 %d이고 곱은 %d이야",a+b,a*b);
  return(0);
}
