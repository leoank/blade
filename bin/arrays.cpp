#include <fileIO.hpp>
#include <fmt/core.h>
#include <fmt/ranges.h>
#include <hello.hpp>
#include <arrays.hpp>
#include <iostream>
// Define the loop constant.
const int Hello::LOOP_CONST = 100;

int main()
{
  fmt::print("\n\n************ARRAYS****************\n\n");
  fmt::print("Two Sum\n\n");
  std::vector array{ 3, 5, -4, 8, 11, 1, -1, 6 };
  int target = 10;
  fmt::print("Given: {}\n", array);
  fmt::print("Target: {}\n", target);
  std::vector<int> sum = Arrays::two_num_sum_brute(&array, target);
  fmt::print("Result: {}\n\n", sum);
  return 0;
}