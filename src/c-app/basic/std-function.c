#include <stdio.h>

int main() {
  printf("hello");

  int a = 0;

  printf("정수를 입력하세요 __\b\b");  // \b\b : 백스페이스 두칸 =>
                                       // 사용자입력값이 __ 를 덮어쓴다.

  scanf("%d", &a);

  printf("입력값 : %d\n", a);
  return 0;
}