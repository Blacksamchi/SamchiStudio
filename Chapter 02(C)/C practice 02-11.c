#include <studio.h>
int main(void)
{
  int x,y;
  printf("두개의 정수를 입력해 주세요\n");
  printf("정수 x:\n"); scanf("%d",&x);
  printf("정수 y:\n"); scanf("%d",&y);
  printf("x의 값은 y의 값의 %f%%입니다.",100*(double)x/y);

  return(0);
}
