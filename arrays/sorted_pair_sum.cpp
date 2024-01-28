#include "stdio.h"
#include <climits>
#include <cstdlib>
#include <vector>

using namespace std;

pair<int, int> closestSum(vector<int> arr, int x) {
  int n = arr.size();

  int start = 0;
  int end = n - 1;

  int leftIdx, rightIdx;
  int diff = INT_MAX;

  while (start < end) {
    int cs = arr[start] + arr[end];

    if (abs(cs - x) < diff) {
      diff = abs(cs - x);
      leftIdx = start;
      rightIdx = end;
    }

    if (cs > x) {
      end--;
    } else {
      start++;
    }
  }

  return {arr[leftIdx], arr[rightIdx]};
}

int main() {
  vector<int> arr = {10, 22, 28, 29, 30, 40};
  pair<int, int> answer = closestSum(arr, 52);

  printf("%d %d", answer.first, answer.second);
}
