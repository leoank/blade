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
  Hello::hello();
  auto _pwd = pwd();
  fmt::print("{}", _pwd);
  for (auto [i, N] = std::tuple{ 0, Hello::LOOP_CONST }; i < N; i++) {
    fmt::print("Numbers: {}", i);
  }
  std::vector array{ 3, 5, -4, 8, 11, 1, -1, 6 };
  std::vector<int> sum = Arrays::two_num_sum_brute(&array, 10);
  fmt::print("\nArray: {}\n", sum);
  for (int x : sum) {
    // std::cout << x << std::endl;
    fmt::print("Element: {}\n", x);
  }

  return 0;
}