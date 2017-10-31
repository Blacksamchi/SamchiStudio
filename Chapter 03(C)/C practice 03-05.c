/* 읽어들인 정수값의 절대값을 표시하는 프로그램 */
#include <studio.h>

int main(void)
{
  int num;
  printf("정수를 입력해주세요"); scanf("%d",&num);

  if (num < 0)
    num = -num /* 입력된 값이 음수인경우 절대값 표기를 위해 양수로 변환함 */
  printf("절대값은 %d입니다.\n", &num);
  return(0);
}
