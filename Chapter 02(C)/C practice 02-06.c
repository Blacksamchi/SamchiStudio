#include<studio.h>
int main(void)
{
  double a;
  printf("실수를 입력해라:\n"); scanf("%lf",&a);
  /*C언어에선 실수를 부동소수점 상수(floating-point number)라 한다*/
  /*         정수를 정수 상수(integer number)라 한다.            */
  printf("실수했군, 넌 %f라고 썼다. 응? 아니라고?",a);/*그래서 표시형 변환지정은 %f, 읽어들이는 변환지정은 %lf로 쓴다*/
  return(0);
}
