#include <iostream>
using namespace std;

int binarySearch(int sortedArr[], int size, int target, int start, int end) {
  int midIndex = (start + end)/2;
  while(start <= end) {
    if(sortedArr[midIndex] == target) {
      return midIndex;
    }
    if(target > sortedArr[midIndex]) {
        return binarySearch(sortedArr, size, target, midIndex + 1, end);
    } 
    return binarySearch(sortedArr, size, target, start, midIndex - 1);
 }
 return -1;
}

int main() {
  int sortedArr[] = {2,5,7,8,9,15};
  int size = 6;
  int target = 15;
  int start = 0;
  int end = size - 1;
  int result = binarySearch(sortedArr, size, target, start, end);
  if(result < 0) {
    cout<<"Not found";
  } else {
    cout<<"Found at position "<<result<<endl;
  }
  return 0;
}