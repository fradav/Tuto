#include <iostream>
#include <vector>

int main(int, char**) {
   std::cout << "Hello, world!\n";
   std::vector<int> truc { 1, 2 , 3 , 4};
   for(auto& machin : truc) std::cout << machin;
   std::cout << std::endl;
   for(auto i =0; i < 10; i++) 
    std::cout << i << std::endl;
}
