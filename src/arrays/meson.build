arrays_source = files('two_number_sum.cpp')
project_sources += arrays_source

arrays_lib = shared_library('arrays',
                                    arrays_source,
                                    cpp_args: warn_args + opt_args,
                                    include_directories : inc
                                    )