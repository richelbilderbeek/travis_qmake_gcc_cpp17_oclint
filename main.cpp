#include <iostream>

auto f() noexcept {
  return "Hello world\n";
}

int main()
{
  static_assert("C++17"); //C++17 has a default message
  std::cout << f() << '\n';
}
