#include "stdio.h"
#include <climits>
#include <vector>

using namespace std;
int max_sub_arr_sum(vector<int> arr) {
  // edge case, if every element is negative
  bool allNeg = true;
  int largest = INT_MIN;

  for (int x : arr) {
    if (x > 0) {
      allNeg = false;
      break;
    }

    largest = max(largest, x);
  }

  // if the edge case does exist just return the largest negative number
  if (allNeg) {
    return largest;
  }

  // current sum
  int cs = 0;

  for (int x : arr) {
    cs += x;

    // we will ignore negative numbers
    if (cs < 0) {
      cs = 0;
    }

    largest = max(cs, largest);
  }

  return largest;
}

int main() {
  vector<int> arr = {1, 2, -7, 6, 3, 5, -9};
  printf("%d", max_sub_arr_sum(arr));
  return 0;
}
