#include <stdio.h>

int main() {
  int Numbers[20], Count, Counter, MaximumNumber;
  printf("Enter how many numbers do you want to read:");
  scanf("%d", &Count);
  printf("Enter the first number:");
  scanf("%d", &Numbers[0]);
  for ( Counter = 1; Counter < Count; Counter ++ ) {
    printf("Enter the next number:");
    scanf("%d", &Numbers[Counter]);
  }
  MaximumNumber = Numbers[0];
  for ( Counter = 1; Counter < Count; Counter ++ ) {
    if ( Numbers[Counter] > MaximumNumber ) {
      MaximumNumber = Numbers[Counter];
    }
  }
  printf ( "%d is the greatest number among all the %d numbers.", MaximumNumber, Count);
  return 0;
}