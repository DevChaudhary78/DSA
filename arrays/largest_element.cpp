#include "iostream"
#include "vector"

using namespace std;

int largestElement(vector<int> arr);

int main() {
  vector<int> arr = {-3, 4, 1, 2, 3};

  int solution = largestElement(arr);
  cout << solution << endl;
}

int largestElement(vector<int> arr) {
  int largest = arr[0];
  for (int i = 0; i < arr.size(); i++) {
    if (largest < arr[i]) {
      largest = arr[i];
    }
  }

  return largest;
}
