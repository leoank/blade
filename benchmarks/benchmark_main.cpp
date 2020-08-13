#include <benchmark/benchmark.h>
#include <memory>
#include <memtracker.hpp>
#include <npas4/Npas4.h>

class TestMemoryManager : public benchmark::MemoryManager
{
  void Start() {}
  void Stop(Result *result)
  {
    result->num_allocs = npas4::GetRAMSystemUsedByCurrentProcess() + npas4::GetRAMVirtualUsedByCurrentProcess();
    result->max_bytes_used = npas4::GetRAMSystemUsedByCurrentProcess() + npas4::GetRAMVirtualUsedByCurrentProcess();
  }
};

int main(int argc, char **argv)
{
  benchmark::Initialize(&argc, argv);
  if (benchmark::ReportUnrecognizedArguments(argc, argv)) return 1;
  std::unique_ptr<benchmark::MemoryManager> memory_manager(new TestMemoryManager());
  benchmark::RegisterMemoryManager(memory_manager.get());
  benchmark::RunSpecifiedBenchmarks();
  benchmark::RegisterMemoryManager(nullptr);
}