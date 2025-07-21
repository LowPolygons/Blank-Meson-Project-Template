#ifndef EXAMPLE_HEADER_EXTERNAL
#define EXAMPLE_HEADER_EXTERNAL

namespace Example {
template <typename T> auto example_routine(T value) -> const T & {
  return value;
}
} // namespace Example

#endif
