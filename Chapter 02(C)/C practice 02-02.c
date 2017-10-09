#include<studio.h>
int main(void)
{
  int x;
  printf("정수의 값을 입력:\n"); scanf("%d",&x);
  printf("x/5=%d\n",x/5); /*몫*/
  printf("x%%5=%d\n",x%5); /*나머지*/
  /*printf 함수는 %d 처럼 %으로 서식지정 기능을 가지기에 정말 %를 쓰고자 하면 %%로
    쓰기로 약솜됨, put은 서식지정 기능이 없기에 %%는 그대로 %%로 나타냄*/
  return(0);
}
