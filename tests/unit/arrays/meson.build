array_test_sources = [
    'test_two_brute.cpp'
]
array_test_deps = [
    catch_dep
]

array_test_lib_deps = [
    arrays_lib,
    # catch_main_lib
]

test_arrays = executable('test_arrays', 
    array_test_sources,
    catch_main_source, 
    include_directories : inc,
    dependencies : [array_test_deps], 
    link_with : [array_test_lib_deps])

test('Arrays test', test_arrays)

all_test_deps += array_test_deps
all_test_dep_libs += array_test_lib_deps
all_test_sources += files(array_test_sources)