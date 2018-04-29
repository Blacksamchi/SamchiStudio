/* 1부터 특정 정수까지 더한값을 구하라 */
#include<studio.h>

int main(void)
{
  int st = 1;
  int count = 0;
  int num;

  printf("1부터 입력한 정수까지 더합니다.\n 정수를 입력해주세요."); scanf("%d",&num);
  do {
    result = st + result;
    count = count + 1;
  } while(count = num);
  printf("1부터 %d까지 더한 값은 %d입니다.\n",num, resutl);

  return(0);
}
