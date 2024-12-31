#include <stdio.h>

int main() {
  printf("start\n");

  char str[20] = "hello";

  char star[20];
  star[0] = 'h';
  star[1] = 'e';
  star[2] = 'l';
  star[3] = 'l';
  star[4] = 'o';
  star[5] = '\0';

  printf("%s\n", str);
  printf("%s\n", star);

  // str의 메모리는 실제 메모리상 연결되어 있는게 보장되나
  // star의 메모리는 실제 메모리상 연결되어있는게 보장되지 않는다.
  // str (문자열은) \0 을 만날때까지 연결된다. \0 : 문자열 종료 의미

  // 예제
  char* p_str = str;
  while (*p_str) {
    printf("%c\n", *p_str);
    p_str++;
  }

  return 0;
}