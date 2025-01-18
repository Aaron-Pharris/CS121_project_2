#include <stdio.h>

void printValues(int*);
void sort(int*);
void swap(int*, int*);

int main(){
  int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};
  printf("Before: \n");
  printValues(values);



  // test swap
  int x = 3;
  int y = 5;
  printf("x: %d, y: %d \n", x, y);
  swap(&x, &y);
  printf("x: %d, y: %d \n", x, y);

  sort(values);
  printf("After: \n");
  printValues(values);

  return(0);
} // end main

void printValues(int values[]){
  for(int i = 0; i < 9; i++){
    printf("%d ", values[i]);
  }
  printf("\n");
  return(0);
}

void swap(int* x, int* y){
  int temp = *x;
  *x = *y;
  *y = temp;
  return(0);
}

void sort(int values[]){
  int MAX = 9;
  for(int i = 0; i < MAX - 1; i++){
    for(int j = 0; j < MAX - i -1; j++){
      if(values[j] > values[j+1]){
        swap(values[j], values[j+1]);
	printValues(values);
      }
    }
  }

}

