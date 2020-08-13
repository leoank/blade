# demo_source = files('demo.cpp')
# poco_source = files('poco.cpp')

# project_sources += demo_source
# project_sources += poco_source

demo_dep_libs = [hello_lib, fileIO_lib, arrays_lib]
fmt_dep = dependency('fmt', version: '>=7.0.1')
executable('demo', 
            'demo.cpp',
            cpp_args: warn_args + opt_args,
            include_directories: inc,
            dependencies: [fmt_dep], 
            link_with: [demo_dep_libs])

poco_dep = dependency('poco', version: '>=1.9.4')
executable('poco_d', 
            'poco.cpp',
            cpp_args: warn_args + opt_args,
            dependencies: [poco_dep])

easy_profiler_dep = dependency('easy_profiler', version: '>=2.1.0')
executable('arrays', 
            'arrays.cpp',
            cpp_args: opt_args + profile_args,
            include_directories: inc,
            dependencies: [fmt_dep, easy_profiler_dep], 
            link_with: [arrays_lib])

pthread_dep = cpp.find_library('pthread')
executable('pr', 
            'pr.cpp',
            cpp_args: opt_args + profile_args,
            include_directories: inc,
            dependencies: [pthread_dep, easy_profiler_dep])