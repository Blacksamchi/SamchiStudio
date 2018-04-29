/* 읽어 들인 정수값이 10으로 나누어지는가(원하는 만큼 반복) */

#include<studio.h>

int main(void)
{
  int count;
  do {
    int no;

    printf("정수를 입력해주세요 :"); scanf("%d",&no);

    if (no%10)
      puts("이 수는 10으로 나누어지지 않습니다.");
    else
      puts("이 수는 10으로 나누어집니다.");

    printf("한 번 더?  [yes-0, no-9]"); scanf("%d",&count);
  } while (count = 10)

  return(0);
}
