#include <stdio.h>

int main(void) {
  int TermValue, TermCounter, Counter, Product;
  printf ("Up to which number you want to print the series?");
  scanf( "%d", &TermValue);
  TermCounter = 1;
  printf("The series up to %d is", TermValue);
  while ( TermCounter < TermValue ) {
    Counter = 1;
    Product = 1;
    while ( Counter <= TermCounter ) {
      Product = Product * TermCounter;
      Counter = Counter + 1;
    }
    if (Product > TermValue) {
      break;
    }
    else {
      printf(" %d",Product);
    }
    TermCounter = TermCounter + 1;
  }
  printf(".");
  return 0;
}