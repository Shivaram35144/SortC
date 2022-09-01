#include<stdio.h>
#include<time.h>
int partition(int alist[],int first,int last){
    int pivotvalue = alist[first];
    int leftmark = first+1;
    int rightmark = last;
    int done = 0;
    while(done==0){
       while(leftmark <= rightmark && alist[leftmark] <= pivotvalue){
           leftmark = leftmark + 1;}

       while (alist[rightmark] >= pivotvalue && rightmark >= leftmark){
           rightmark = rightmark -1;}

       if(rightmark < leftmark){
           done = 1;}
       else{
           int temp = alist[leftmark];
           alist[leftmark] = alist[rightmark];
           alist[rightmark] = temp;} }
    int temp = alist[first];
    alist[first] = alist[rightmark];
    alist[rightmark] = temp;
    return rightmark; }
void quickSort(int alist[],int first,int last){
    if(first<last){
        int splitpoint = partition(alist,first,last);
        quickSort (alist,first,splitpoint-1);
        quickSort (alist,splitpoint+1,last);
}}
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d ", array[i]);
  }
  printf("\n");
}
int main(){
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
  quickSort(data, 0,size);
  t = clock() - t;
  double time_taken = ((double)t)/CLOCKS_PER_SEC;
  printf("\nThe sorted array is : \n");
  printArray(data, size);
  printf("\nCPU Time :%f seconds\n", time_taken);
}