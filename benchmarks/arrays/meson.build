array_bench_sources = [
    'bench_two_brute.cpp'
]

array_bench_deps = [

]

array_bench_lib_deps = [
    arrays_lib,
]

bench_arrays = executable('bench_arrays', 
    array_bench_sources,
    bench_main_source, 
    include_directories : inc,
    dependencies : [array_bench_deps] + common_dep, 
    link_with : [array_bench_lib_deps])

benchmark('Arrays benchmark', bench_arrays)

all_benchmark_deps += array_bench_deps
all_benchmark_dep_libs += array_bench_lib_deps
all_benchmark_sources += files(array_bench_sources)