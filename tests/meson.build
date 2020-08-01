all_test_deps = []
all_test_dep_libs = []
all_test_sources = []

catch_main_source = files('catch_main.cpp')

catch_dep = dependency('catch2', version: '>=2.13.0')
all_test_deps += catch_dep
# catch_main_lib = static_library('catch_main', 
#                                 catch_main_source,
#                                 cpp_args: warn_args + opt_args,
#                                 dependencies: [catch_dep])

# all_test_dep_libs += catch_main_lib
subdir('unit')

all_tests = executable('all_tests', 
    all_test_sources,
    catch_main_source, 
    include_directories : inc, 
    dependencies : all_test_deps, 
    link_with : all_test_dep_libs)

test('All tests', all_tests)