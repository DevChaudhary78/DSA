#include "stdio.h"
#include <vector>

using namespace std;

int binary_search(vector<int> arr, int start, int mid, int end, int val) {
  if (arr[mid] == val) {
    return arr[mid];
  }

  else if (arr[mid] < val) {
  }
  return 0;
}

int lower_bound(vector<int> arr, int val) {
  // considering edge case that no lower bound is found
  if (arr[0] > val) {
    return -1;
  }
}

int main() {
  vector<int> arr = {-1, -1, 2, 3, 5};
  printf("%d", lower_bound(arr, 4));
}
