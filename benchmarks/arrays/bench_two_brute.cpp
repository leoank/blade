#include <benchmark/benchmark.h>
#include <arrays.hpp>

static void BM_Arrays_brute(benchmark::State &state)
{
  // Perform setup here
  for (auto _ : state) {
    // This code gets timed
    std::vector array{ 3, 5, -4, 8, 11, 1, -1, 6 };
    int target = 10;
    Arrays::two_num_sum_brute(&array, target);
  }
}

BENCHMARK(BM_Arrays_brute);