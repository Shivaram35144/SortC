#include<stdio.h>
#include<time.h>

void bubbleSort(int array[], int size) {
    int count;

  for (int step = 0; step < size - 1; step++) {
    for (int i = 0; i < size - step - 1; i++) {
      if (array[i] > array[i + 1]) {
        count+=1;
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
  printf("\nBasic Operation : %d\n\n",count);
}
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d ", array[i]);
  }
  printf("\n");
}
int main() {
    
  clock_t t;

  int n;
  printf("\nHow many elements?\t:  ");
  scanf("%d",&n);
  printf("\n");
  int data[n];
  printf("Enter the elements : \n");
  for(int i =0;i<n;i++){
      int x;
      
      scanf("%d",&x);
      
      data[i]=x;
  }
  
  int size = sizeof(data) / sizeof(data[0]);
  
  t = clock();
  bubbleSort(data, size);
  t = clock() - t;
  double time_taken = ((double)t)/CLOCKS_PER_SEC;
  printf("The sorted array is : \n");
  printArray(data, size);
  printf("\nCPU Time :%f seconds\n", time_taken);
}