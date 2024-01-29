#include "stdio.h"
#include <algorithm>
#include <vector>
using namespace std;

vector<int> kRotate(vector<int> arr, int k) {
  int n = arr.size();
  k = k % n;

  reverse(arr.begin(), arr.begin() + n - k);
  reverse(arr.begin() + n - k, arr.end());

  reverse(arr.begin(), arr.end());

  return arr;
}

int main() {
  vector<int> arr = {1, 3, 5, 7, 9};
  vector<int> ans = kRotate(arr, 12);
  // vector<int> ans = kRotate(arr, 2);

  for (int x : ans) {
    printf("%d ", x);
  }
  return 0;
}
