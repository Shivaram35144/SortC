#include<stdio.h>
#include<time.h>

void insertionSort(int array[], int size) {
    int count;
    for(int j=1;j<size;j++){
        int key=array[j];
        int i=j-1;
        while(i>=0 && array[i]>key){
            count+=1;
            array[i+1]=array[i];
            i-=1;
        }
        array[i+1]=key;
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
  insertionSort(data, size);
  t = clock() - t;
  double time_taken = ((double)t)/CLOCKS_PER_SEC;
  printf("The sorted array is : \n");
  printArray(data, size);
  printf("\nCPU Time :%f seconds\n", time_taken);
}