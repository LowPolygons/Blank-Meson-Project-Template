project('PROJECT NAME', 'cpp',
  default_options: ['cpp_std=c++23']
)

#inc_dirs = ['src']
#
# Example project with an external dependency
inc_dirs = ['src', 'external', 'external/example-lib']

all_sources = files(
#'./src/...'
)

# example_dependency = dependency('[example] sdl2', required: true)

executable('PROJECT NAME', 
  sources: ['./src/main.cpp'] + all_sources,
  include_directories: [
    inc_dirs
  ],
  #dependencies: example_dependency
)

subdir('tests')
