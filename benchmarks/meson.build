all_benchmark_deps = []
all_benchmark_dep_libs = []
all_benchmark_sources = []

bench_main_source = files('benchmark_main.cpp')

bench_dep = dependency('benchmark', version: '>=1.5.0')
npas4_dep = dependency('npas4', version: '>=1.0.0')
common_dep = [bench_dep, npas4_dep]
all_benchmark_deps += common_dep

subdir('arrays')

all_benchmarks = executable('all_benchmarks', 
    all_benchmark_sources, 
    include_directories : inc, 
    dependencies : all_benchmark_deps, 
    link_with : all_benchmark_dep_libs)

benchmark('All Benchmarks', all_benchmarks)