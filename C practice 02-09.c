#include <studio.h>
int main(void)
{
  int x;
  double y;

  x=5/2;
  y=5.0/2.0;

  printf("x = %d",x);/* x = 2 */
  printf("y = %f",y);/* y = 2.50000 */

  printf("5 / 2 = %d\n",5/2);/* 2 */
  printf("5 / 2.0 = %f\n",5/2.0);/* 2.50000 */
  printf("5.0 * 2.0 = %f\n",5.0*2.0);/* 10.00000 */

  printf("5 / x = %d\n",5/x);/* 2 */
  printf("5 / y = %f\n",5/y);/* 2.00000 */
  printf("5.0 / x = %f\n",5.0/x);/* 2.50000 */
  printf("5.0 / y = %f\n",5.0/y);/* 2.00000 */
  printf("x / y = %f\n",x/y);/* 0.80000 */
/* 연산의 대상이 되는 어퍼랜드의 형이 다를 경우, 작은 쪽의 형인 오퍼랜드는 큰 쪽의 형으로 변환되어 계산된다 */
  return(0);
}
