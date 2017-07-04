#include <iostream>

int main(int argc, char const *argv[]) {
  std::cout << "MULTIPLICATION TABLES" << "\n\n";
  for (int j = 1; j<13; j++)
  {
  for (int i = 1; i<13; i++)
  {
    std::cout << j << " X " << i << " = " << j*i << '\n';
  }
  std::cout << '\n';
}
  return 0;
}
