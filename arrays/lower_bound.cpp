#include "stdio.h"
#include <vector>

using namespace std;

int lower_bound(vector<int> arr, int val) {
  int start = 0;
  int end = arr.size() - 1;

  int answer = -1;

  while (start <= end) {
    int mid = (start + end) / 2;
    if (arr[mid] <= val) {
      answer = arr[mid];

      start = mid + 1;
    } else {
      end = mid - 1;
    }
  }

  return answer;
}

int main() {
  vector<int> arr = {-1, -1, 2, 3, 5};
  printf("%d", lower_bound(arr, 4));
}
