/*
 * 비트연산
 * or (|) 특정 스위치를 켠다.
 * and (&) 특정 스위치를 끈다.
 */
#include <stdio.h>

void print_bits(unsigned char value) {
  printf("value : %d\n", value);
  for (int i = 7; i >= 0; i--) {
    printf("%d ", (value >> i) & 1);
    if (i > 0 && i % 4 == 0) {
      printf("| ");
    }
  }
  printf("\n");
}

int main() {
  // unsigned char a = 8;
  // printf("Value: %d\n", a);
  // printf("Bits: ");
  // print_bits(a);

  // 0 0 0 1 1 0 0 1
  char a = 25;
  print_bits(a);

  // a의 2^3 자리의 1을 끄려면?
  // 0 0 0 1 1 0 0 1
  // &
  // 1 1 1 1 0 1 1 1
  print_bits(1 << 3);  // 1을 왼쪽(<<)으로 3칸 민다
  print_bits(~(1 << 3));
  char b = a & ~(1 << 3);
  print_bits(b);

  /*
   * 2^3자리 의 0을 1로 켜려면?
   */
  // 0 0 0 1 0 0 0 1
  char c = 17;
  print_bits(c);
  char d = c | (1 << 3);
  print_bits(d);

  /*
   * sizeof 연산자 : 데이터형 or 변수의 메모리 크기 반환(바이트 수)
   *
   */

  /*
   * 형변환 연산자
   * 자료형간 크기 차이 중요
   * (int)3.14 = 3
   */
  double pi = 3.14;
  int i = 1;

  printf("%f\n", (pi + i));
  printf("%d\n", ((int)pi + i));

  return 0;
}
