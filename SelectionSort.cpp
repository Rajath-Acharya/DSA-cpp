//Time complexity
// Best case O(n^2)
// Avg case O(n^2)
// Worst case O(n^2)

//Space complescity
//O(1)

#include <iostream>
using namespace std;

void recursiveSelectionSort(int arr[], int startIndex, int n) {
  if(startIndex>=n) return;
  int minIndex = startIndex;
  int j = startIndex + 1;
  while(j<n) {
    if(arr[j]<arr[minIndex]) {
      minIndex=j;
    }
    j++;
  }
  if(minIndex != j) {
    swap(arr[startIndex], arr[minIndex]);
  }
  recursiveSelectionSort(arr, startIndex+1, n);
}

void selectionSort(int arr[], int n) {
  if(n<=1) return;
  for(int i=0;i<n-1;i++) {
  int minIndex = i;
  int j = i+1;
    while(j<n) {
      if(arr[j] < arr[minIndex]) {
        minIndex = j;
      }
      j++;
    }
    if(minIndex != j) {
    swap(arr[i], arr[minIndex]);
    }
  }
}

int main() {
  int arr[] = {3,7,4,2,9,1,10,8,2,5};
  int n = 10;
  // selectionSort(arr, n);
  recursiveSelectionSort(arr, 0, n);
  for(int i=0;i<n;i++) {
    cout<<arr[i];
  }
}
