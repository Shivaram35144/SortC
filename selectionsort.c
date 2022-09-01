#include<stdio.h>
#include<time.h>

void selectionSort(int array[], int size) {
    int count;

  for(int i=0;i<size;i++){
        int min=i;
        for(int j=0;j<size;j++){
            if(array[j]<array[min]){
                count+=1;
                min=j;
            }
        
        int temp = array[i];
        array[i]=array[min];
        array[min]=temp;}
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
  selectionSort(data, size);
  t = clock() - t;
  double time_taken = ((double)t)/CLOCKS_PER_SEC;
  printf("The sorted array is : \n");
  printArray(data, size);
  printf("\nCPU Time : %f seconds\n", time_taken);
}