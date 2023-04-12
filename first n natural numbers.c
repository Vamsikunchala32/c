#include <stdio.h>

int sum(int n) {
   if (n == 0) // base case
      return 0;
   else
      return n + sum(n-1); // recursive case
}

int main() {
   int n, result;
   printf("Enter a positive integer: ");
   scanf("%d", &n);
   result = sum(n);
   printf("Sum of first %d natural numbers is %d.\n", n, result);
   return 0;
}
