/* 문제 04-03을 복합 대입연산자 혹은 후치 증가연산자 ++으로 바꾸어 써라 */
#include<studio.h>

int main(void)
{
  do {
    puts("정수 값을 입력해주세요."); scanf("%d",&na);
    if (na<0) {
      puts("음수는 안됩니다.");
    }
  } while (na<0);

  temp = na;
  count = 0;
  do {
    temp /= 10;
    count++;   /*후치 증가는 a++, 후치 감소는 a--이다.*/
  } while(temp>0);
  printf("%d는 %d자리입니다.",na,count);
  return(0);
}
