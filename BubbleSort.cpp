//Time complexity
// Best case O(n^2)
// Worst case O(n^2)

//Space complescity
//O(1)

#include <iostream>
using namespace std;

void recursiveBubbleSort(int arr[],int n) {
  if(n == 1) return;
  for(int i=0;i<n-1;i++) {
    if(arr[i]>arr[i+1]) {
      int temp = arr[i];
      arr[i] = arr[i+1];
      arr[i+1] = temp;
    }
  }
  recursiveBubbleSort(arr,n-1);
}

void bubbleSort(int arr[], int n) {
  for(int i=1;i<n;i++) {
    bool swapped = false;
    int j = 0;
    while(j<n-i) {
      if(arr[j] > arr[j+1]) {
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
        swapped = true;
      }
      j++;
    }
    if(swapped == false) {
      break;
    }
  }
}

int main() {
  int arr[] = {7,4,9,2,5,1,7,6,2,8};
  int n = 10;
  bubbleSort(arr,n);
  // recursiveBubbleSort(arr,n);
  for(int i=0;i<n;i++) {
    cout<<arr[i]<<endl;
  }
}