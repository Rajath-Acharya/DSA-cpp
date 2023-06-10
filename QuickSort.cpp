//Time complexity
// Best case O(nlogn)
// Avg case O(nlogn)
// Worst case O(n^2)

//Space complecity O(n)

#include <iostream>
using namespace std;

int partition(int arr[], int start, int end) {
  int pivot = arr[start];
  int count = 0;
  for(int i=start+1;i<=end;i++) {
    if(arr[i] <= pivot) {
      count++;
    }
  }
  
  int pivotIndex = start + count;
  swap(arr[pivotIndex], arr[start]);

  int i = start;
  int j = end;
  while(i < pivotIndex && j > pivotIndex) {
    while(arr[i] <= arr[pivotIndex]) {
      i++;
    }
    while(arr[j] > arr[pivotIndex]) {
      j--;
    }
    if(i < pivotIndex && j > pivotIndex) {
      swap(arr[i++], arr[j--]);
    }
  }
  return pivotIndex;
}

void quickSort(int arr[], int start, int end) {
  if(start >= end) {
    return;
  }

  int pivotIndex = partition(arr, start, end);

//sort left part
  quickSort(arr, start, pivotIndex - 1);
//sort right part
  quickSort(arr, pivotIndex + 1, end);
}

int main() {
  int arr[] = {4,5,1,2,9,7,7,6};
  int n = 8;
  quickSort(arr,0, n-1);
  for(int i=0;i<n;i++) {
    cout<<arr[i]<<"";
  }
  return 0;
}