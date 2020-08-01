#include <arrays.hpp>
#include <catch2/catch.hpp>
#include <vector>

TEST_CASE("Two Num Brute", "[arrays]")
{
  std::vector array{ 3, 5, -4, 8, 11, 1, -1, 6 };
  int target = 10;
  REQUIRE(Arrays::two_num_sum_brute(&array, target) == std::vector<int>{ 11, -1 });
}