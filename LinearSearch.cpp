#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
  int i = 0;
  while(i < size) {
      if(target == arr[i]) {
        return i;
      }
      i++;
  }
  return -1;
}

int linearSearch2(int arr[], int size, int target) {
  int left = 0;
  int right = size - 1;
  while(left <= right) {
    if(arr[left] == target) {
      return left;
      break;
    }
    if(arr[right] == target) {
      return right;
      break;
    }
    left++;
    right--;
  }
  return -1;
}

int main() {
int arr[] = {3,5,6,7,9,8,1};
int size = 7;
int target = 1;

//method 1
int result = linearSearch(arr, size, target);

//method 2
int result2 = linearSearch2(arr, size, target);

if(result < 0) {
  cout<<"Not found";
} else {
  cout<<"Method1 Found at position "<<result;
}

if(result2 < 0) {
  cout<<"Not found";
} else {
  cout<<"Method2 Found at position "<<result;
}

  return 0;
}