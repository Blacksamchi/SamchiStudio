#include <studio.h>
int main(void)
{
  int x, y; /*변수선언*/
  int sum; /*곱셈 변수*/
  puts("정수를 입력해주세요.");
  printf("정수 1:"), scanf("%d",&x);
  printf("정수 2:"), scanf("%d",&y):

  sum=x*y; /*변수의 곱을 seki에 대입*/

  printf("두 값을 곱한 값은 %d입니다.",sum); /*printf("두값을 곱한 값은 %d입니다.",sum=x*y); 로 위 계산식을 생략 가능*/
  return(0);
}
