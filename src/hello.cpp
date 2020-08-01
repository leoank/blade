#include <cstdio>
#include <fmt/core.h>
#include <hello.hpp>
#include <iostream>


/**
 * @brief Hello function
 * 
 * @return int 
 */
int Hello::hello()
{
  std::ios_base::sync_with_stdio(false);
  fmt::print("Hello, world from fmt!\n");
  return 0;
}