#include <experimental/filesystem>

std::string pwd()
{
  std::string current_working_dir =
    std::experimental::filesystem::current_path();
  return current_working_dir;
}