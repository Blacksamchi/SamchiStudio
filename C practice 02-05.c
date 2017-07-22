#include<studio.h>
int main(void)
{
  int a,b;
  printf("두개의 정수를 입력해에");
  printf("정수 1:\n"); scanf("%d",&a);
  printf("정수 2:\n"); scanf("%d",&b);
  ave=(a+b)/2;  /*(계산)식문 이라고 부름*/
  printf("두 정수의 평균값의 부호를 반전한 값은 %d",-ave);/* -...단항연산자 */
  return(0);
}
