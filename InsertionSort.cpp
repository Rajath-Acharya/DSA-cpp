//Time complexity
// Best case O(n)
// Worst case O(n^2)
// Avg case O(n^2)

//Space Complexity
// O(1)

#include <iostream>
using namespace std;

void recursiveInsertionSort(int arr[], int n) {
  if(n<=1) return;
  recursiveInsertionSort(arr, n-1);
    int last = arr[n-1];
    int j= (n-1)-1;
    while(j>=0 && arr[j]>last) {
      arr[j+1] = arr[j];
      j--;
    }
    arr[j+1] = last;
}

void insertionSort(int arr[], int n) {
  if(n<=1) return;
  for(int i=1;i<n;i++) {
    int current = arr[i];
    int j=i-1;
    while(j>=0 && arr[j]>current) {
      arr[j+1] = arr[j];
      j--;
    }
    arr[j+1] = current;
  }
}

int main() {
  int arr[] = {1,7,4,3,9,3,3,8,2,5};
  int n = 10;
  // insertionSort(arr,n);
  recursiveInsertionSort(arr,n);
  for(int i=0;i<n;i++) {
    cout<<arr[i]<<"";
  }
  return 0;
}