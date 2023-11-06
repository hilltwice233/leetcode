#include <chrono>
#include <iostream>
// #include <ratio>
#include <sstream>

#include "shared/color.h"
#include "shared/test.h"

using namespace std;

class Solution {
 public:
  vector<int> twoSum(vector<int> &nums, int target) {
    for (int i = 0; i < nums.size(); i++) {
      for (int j = i + 1; j < nums.size(); j++) {
        if (nums[i] + nums[j] == target) {
          return {i, j};
        }
      }
    }
    return {};
  }

  void test(string name, vector<int> nums, int target, vector<int> expect) {
    const auto start = chrono::high_resolution_clock::now();
    assert(twoSum(nums, target) == expect);
    const auto end = chrono::high_resolution_clock::now();
    cout << dim("test " + name + " takes: " + format_duration(end - start))
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
