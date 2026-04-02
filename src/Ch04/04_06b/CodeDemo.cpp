// Complete Guide to C++ Programming Foundations
// Exercise 04_06
// The Vector Class, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <string>

int main(){

    std::vector<std::string> checkpointers = {"checkpointer_1", "checkpointer_2", "checkpointer_3"};
    

    std::cout << "Size of the vector:: " << checkpointers.size()<< std::endl;
    checkpointers.push_back("checkpointer_4");
    checkpointers.push_back("checkpointer_5");
   
    std::cout << "Size of the vector:: " << checkpointers.size()<< std::endl;
    checkpointers[0] = "my changed checkpointer";

  std::cout << "Vector at position 0 :: " <<  checkpointers[0] << "." << std::endl;
   
    std::cout << std::endl << std::endl;
    return 0;
}
