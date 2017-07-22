#include <stuio.h>
int main(void)
{
  int no;
  printf("no의 값을 입력해주세요:")
  scanf("%d", &no);/*키보드로 입력한 정수(int)값을 no라는 변수에 대입(적용)시킨다.*/

  printf("no의 값은 %d입니다.", no);/*%d값에 no라는 변수를 쓴다*/
  return(0);
}
