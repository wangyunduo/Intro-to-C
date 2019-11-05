#include <stdio.h>
#define N 105

int main () {
  char str[N];
  int head = 0;
  int tail = 0;

  printf("Input a string:");
  scanf("%s", str);

  while (str[tail+1] != '\0') tail++;

  while (head <= tail) {
    if (str[head] != str[tail]) {
      printf("\nThis string is not a palindrome.");
      return 0;
    }
    head++;
    tail--;
  }
  printf("\nThis string is a palindrome.");

  return 0;
}
