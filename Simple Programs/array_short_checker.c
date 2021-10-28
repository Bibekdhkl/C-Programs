#include <stdio.h>

#define false 0
#define true 1

typedef int bool;

bool is_shorted(int* arr, int size) {
  
  // Base case
  if (size==0 || size==1) return true;
  // Induction hypothesis
  bool is_smaller_shorted = is_shorted(arr+1, size-1);

  // Induction step
  bool result = false;
  if (!is_smaller_shorted) return false;

  // program check
  if (arr[0] > arr[1]) result = false;
  else result = true;

  return result;
}

int main() {
  int arr[] = {1,2,5,4,5};
  int arr1[] = {1,2,3,4,5};
  char yes[] = "shorted";
  char no[] = "not shorted";
  printf("The array is: ");
  if (is_shorted(arr, 5)) printf("%s", yes);
  else printf("%s", no);
  printf("\n");
  printf("The array is: ");
  if (is_shorted(arr1, 5)) printf("%s", yes);
  else printf("%s", no);
  printf("\n");
  return 0;
}
