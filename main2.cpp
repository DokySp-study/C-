
#include <iostream>

void print(int a){std::cout << "int: " << a << std::endl;}
// void print(char a){std::cout << "char: " << a << std::endl;}


int main() {

    print(3);
    print((int)3.3);
  

  return 0;
}