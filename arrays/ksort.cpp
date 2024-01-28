#include "stdio.h"
#include <vector>
using namespace std;

vector<int> kRotate(vector<int> arr, int k) {
  vector<int> ans;
  for (int i = arr.size() - k; i < arr.size(); i++) {
    ans.push_back(arr[i]);
  }

  for (int i = 0; i < arr.size() - k; i++) {
    ans.push_back(arr[i]);
  }

  return ans;
}

int main() {
  vector<int> arr = {1, 3, 5, 7, 9};
  vector<int> ans = kRotate(arr, 2);

  for (int x : ans) {
    printf("%d ", x);
  }
  return 0;
}
