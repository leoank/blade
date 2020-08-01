project('blade', 'cpp',
        version : '0.1.0',
        license : 'MIT',
        meson_version : '>=0.53.0',
        default_options : [ 'warning_level=3', 'buildtype=debugoptimized', 'cpp_std=c++2a' ]
)

# Variables tracking sources and libraries
library_path = []
project_sources = []
project_header_files = []
project_test_sources = []
project_benchmark_sources = []
perf_args = ['-fno-omit-frame-pointer']
opt_args = [
  # '-fno-exceptions',
  '-fno-rtti',
  '-pedantic'
]
warn_args = [ '-Wall',
                  '-Wextra',
                  '-Wshadow', 
                  '-Wnon-virtual-dtor', 
                  '-Wold-style-cast',
                  '-Wcast-align',
                  '-Wunused',
                  '-Woverloaded-virtual',
                  '-Wpedantic',
                  '-Wconversion',
                  # '-Wsign-conversion', 
                  '-Wnull-dereference', 
                  '-Wdouble-promotion',
                  '-Wformat=2',
]

cpp = meson.get_compiler('cpp')

if meson.get_compiler('cpp').get_id() == 'gcc'
  warn_args += ['-Wmisleading-indentation',
      '-Wduplicated-cond',
      '-Wlogical-op',
      '-Wuseless-cast'
      ]
endif

if get_option('enable-warn-as-errors')
  warn_args += ['-Werror']
endif

inc = [include_directories('include')]

subdir('include')
subdir('src')
subdir('bin')
subdir('docs')

if get_option('enable-tests')
  subdir('tests')
endif

if get_option('enable-bench')
  subdir('benchmarks')
endif

# This adds the clang format file to the build directory
configure_file(input : '.clang-format',
               output : '.clang-format',
	       copy: true)
run_target('format',
  command : ['clang-format','-i','-style=file',project_sources,project_test_sources,project_benchmark_sources,project_header_files])

# This regex excludes any sources from the third_party, tests, benchmarks 
# and gtest related files.
regex = '^((?!(third_party|tests|benchmarks|gtest|conan|builddir)).)*$'
# This adds clang tidy support
configure_file(input : '.clang-tidy',
               output : '.clang-tidy',
               copy : true)
clangtidy = find_program('run-clang-tidy', required: false)
if clangtidy.found()
  run_target('tidy',
  command : [
    clangtidy,
    '-clang-tidy-binary',
    'clang-tidy-9',
    '-clang-apply-replacements-binary',
    'clang-apply-replacements-9',
    '-export-fixes=clang_tidy_fixes.yml',
    '-quiet',
    '-j' ,
    '8',
    'files',
    regex ,
    '-format',
    '-p=' + meson.build_root()
  ])
endif
