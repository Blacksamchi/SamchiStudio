#include<studio.h>
int main(void)
{
  int x;
  double y;

  printf("신장을 입력해주세요:\n"); scanf("%d",&x);
  y=(x-100)*0.9;
  printf("당신의 표준체중은 %.1f입니다.\n",y);

  return(0);
}
