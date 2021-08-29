#include <stdio.h>
#include <stdlib.h>
#include<time.h>


int arr[1000],t;
void insertionSort(int arr[], int n) {
   for (int i = 1; i < n; i++){
      int element = arr[i];
      int j = i-1;
      while (j >= 0 && arr[j] > element){
         arr[j+1] = arr[j];
         j = j-1;
      }
      arr[j+1] = element;
   }

}
void Swap(int *x, int *y) {
    int Temp;
    Temp = *x;
    *x = *y;
    *y = Temp;
}
void quickSort(int arr[], int first, int last) {
    int pivot, i, j;
    if(first < last) {
        pivot = first;
        i = first;
        j = last;
        while (i < j) {
            while(arr[i] <= arr[pivot] && i < last)
                i++;
            while(arr[j] > arr[pivot])
                j--;
            if(i < j) {
                Swap(&arr[i], &arr[j]);
            }
        }
        Swap(&arr[pivot], &arr[j]);
        quickSort(arr, first, j - 1);
        quickSort(arr, j + 1, last);
    }
}
int main(){
	int n;
	for (int f = 0; f < 1000 ;f++) {
    	arr[f] = (rand() % 1000) + 1;
}
	insertionSort(arr, n);
	printf("Array of 100000 random numbers is initialized\n\n");
    printf("The array is sorted using quick sort in %u seconds", clock());

}
