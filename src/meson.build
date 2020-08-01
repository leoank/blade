hello_source = files('hello.cpp')
fileIO_source = files('fileIO.cpp')

project_sources += hello_source
project_sources += fileIO_source


fmt_dep = dependency('fmt', version: '>=7.0.1')
hello_lib = shared_library('hello',
                        hello_source,
                        cpp_args: warn_args + opt_args,
                        include_directories : inc,
                        dependencies: [fmt_dep])

stdcfs_dep = cpp.find_library('stdc++fs')
fileIO_lib = shared_library('fileIO',
                        fileIO_source,
                        cpp_args: warn_args + opt_args,
                        include_directories : inc,
                        dependencies: [stdcfs_dep])

subdir('arrays')