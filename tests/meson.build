# The implementation files that need compiling for the tests to run 
global_implementations = [
  #'../src/example/implementation.cc',
]

# Allows better inclusion of headers
included_directories = [
  '../src',
]

test_sources = [
  'examples/example_pass.cc',
  'examples/example_fail.cc'
  # NOTE: Testing this way allows for each test file to have its own main() function that gets called 
]

fs = import('fs')

foreach test_source : test_sources
  test_name = fs.replace_suffix(test_source, '')
  test_name = test_name.replace('/', '_')

  test_exe = executable(
    test_name,  # Use the filename without extension as the target name
    sources: [test_source] + global_implementations,
    include_directories: include_directories(included_directories),
  )

  test(test_name, test_exe)
endforeach
