all_benchmark_deps = []
all_benchmark_dep_libs = []
all_benchmark_sources = []

bench_main_source = files('benchmark_main.cpp')

bench_dep = dependency('benchmark', version: '>=1.5.0')
all_benchmark_deps += bench_dep
bench_main_lib = static_library('bench_main', 
                                bench_main_source,
                                cpp_args: warn_args + opt_args + perf_args,
                                dependencies: [bench_dep])

all_benchmark_dep_libs += bench_main_lib
subdir('arrays')

all_benchmarks = executable('all_benchmarks', 
    all_benchmark_sources, 
    include_directories : inc, 
    dependencies : all_benchmark_deps, 
    link_with : all_benchmark_dep_libs)

benchmark('All Benchmarks', all_benchmarks)