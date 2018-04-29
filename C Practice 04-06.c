/* 문제 04-02의 프로그램을 복합 대입연사자 /=로 바꾸어 써라 */
#include<studio.h>

int main(void)
{
  int num;

  do {
    printf("음수가 아닌 정수를 입력해주세요 :"); scanf("%d",&num);
    if (num<0) {
      puts("음수를 입력하지 마세요.");
    }
  } while (num<0);

  printf("%d를 역순으로 읽으면 ",num);
  do {
    printf("%d", num%10);
    num /= 10;
  } while (num<0);
  puts("입니다.")

  return(0);
}
