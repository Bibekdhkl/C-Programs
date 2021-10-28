/*
 *Program to find largest number in an array
 */

#include <stdio.h>

int large(int* arr, int size) {
  // Base Case
  if (size==1) return *arr;

  // Induction hypothesis
  int largest_small_arr = large(arr+1, size-1);

  // Induction step
  int result = -999;
  if ( arr[0] > largest_small_arr) result = arr[0];
  else result = largest_small_arr;

  return result;
}

int large_end(int* arr, int size) {
  // Base Case
  if (size==1) return *arr;

  // Induction hypothesis
  int largest_small_arr = large_end(arr, size-1);

  // Induction step
  int result = -999;
  if ( arr[size-1] > largest_small_arr) result = arr[size-1];
  else result = largest_small_arr;

  return result;
}

int main() {
  int arr[] = {10,5,70,16,2,0};
  printf("Largest number of array: %d\n", large(arr, 6));
  printf("Largest number of array: %d\n", large_end(arr, 6));
  return 0;
}
