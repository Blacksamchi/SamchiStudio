/* 오른쪽과 같이 정수값을 읽어 들여, 1부터 그 값까지 카운트업하는 프로그램을
   작성하라. 또한 입력 받은 값이 0이하인 경우는 아무 것도 표시하지 않는다*/
#include<studio.h>

int main(void)
{
  int no;

  printf("양의 정수를 입력해주세요 :");
  scanf("%d",&no);

  if (no >= 0)
  {
    int i = 1;
    while (i <= no)
      printf("%d",i++);
      putchar('/n');
  }
  return(0);
}
