/* 음수가 아닌 정수값을 읽어 들여, 그 값을 역순으로 표시하는 프로그램 작성
  단, 음수를 읽어 들인 경우는 재입력 요구 */
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
    num = num / 10;
  } while (num<0);
  puts("입니다.")

  return(0);
}
