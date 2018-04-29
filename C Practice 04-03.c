/* 음수가 아닌 정수값을 읽어 들여, 그 자릿수를 표시. 단, 음수 확인시 재입력 요구 */
#include<studio.h>

int main(void)
{
  int num, temp;
  int dig;

  do {
    printf("음수가 아닌 수를 입력해주세요"); scanf("%d",&num);
    if (num<0){
      puts("음수를 입력하지 마세요.");
    }
  } while(num<0)

  do {
    temp = num;
    dig = 0;

    temp = temp / 10;
    dig = dig + 1;
  } while (temp>0)
  printf("%d는 %d자리입니다.",num,dig);

  return(0);
}
