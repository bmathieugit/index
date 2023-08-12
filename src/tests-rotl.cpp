#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

using uchar_t = unsigned char;
using uint_t = unsigned int;

constexpr uchar_t rotl(uchar_t x, uint_t n) {
  auto max = sizeof(x)*8;
  auto offset = n % max;
  return (x << offset) | (x >> (max - offset));
}

constexpr void printb(uchar_t value) {
  for (int i = sizeof(value) * 8 - 1; i >= 0; --i) {
    char bit = (value >> i) & 1;
    printf("%d", bit);
  }
}

int main() {
  uint_t n = 9;
  uchar_t x = 0b00000001;

  uchar_t r = rotl(x, n);
  printb(x);
  printf(" => ");
  printb(r);
  printf("\n");

  return 0;
}
