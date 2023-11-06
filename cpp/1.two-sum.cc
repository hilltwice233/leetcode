#include "shared/color.h"
#include <chrono>
#include <iostream>
#include <sstream>

using namespace std;

class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {}

  void test(string name, vector<int> nums, int target, vector<int> expect) {
    const auto start = chrono::high_resolution_clock::now();
    assert(twoSum(nums, target) == expect);
    const auto end = chrono::high_resolution_clock::now();
    const auto duration = end - start;
    cout << dim("test " + name + " takes " + to_string(duration.count()))
         << endl;
  }
};

int main() {
  Solution solution;
  solution.test("1", {2, 7, 11, 15}, 9, {0, 1});
  solution.test("2", {3, 2, 4}, 6, {1, 2});
  solution.test("3", {3, 3}, 6, {0, 1});
  cout << green("All tests passed!") << endl;
  return 0;
}
