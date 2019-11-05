#include <stdio.h>

void fun(int m, int k, int a[]);
int is_prime(int n);

int main () {
  int i = 0;
  int m = 0;
  int n = 0;
  int a[1000] = {0};

  printf("Please enter two integers m and n:\n");
  scanf("%d,%d", &m, &n);

  fun(m, n, a);

  for (i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }

  return 0;
}

void fun(int m, int k, int a[]) {
  int i = 0;
  m++;
  while (i < k) {
    if (is_prime(m) == 1) {
      a[i] = m;
      i++;
    }
    m++;
  }
}

int is_prime(int n) {
  int i = 0;
  if (n == 1) return 0;
  for (i = 2; i < n; i++) {
    if (n%i == 0) return 0;
  }
  return 1;
}
