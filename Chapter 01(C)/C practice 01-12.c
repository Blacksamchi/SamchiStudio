#include <studio.h>
int main(void)
{
  int x, y, z;
  printf("세개의 변수를 입력하세요.\n");
  puts("변수 1:"); scanf("%d",&x);
  puts("변수 2:"); scanf("%d",&y);
  puts("변수 3:"); scanf("%d",&z);

  printf("세 변수의 합은 %d입니다.",x+y+z);
  return(0);
}
