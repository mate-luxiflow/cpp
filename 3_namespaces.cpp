#include <iostream>

namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}

int main(){
    
    //namespace = prvides a solution for preventing naem conflicts
    //             in large projects. each intety need a unique name.
    //              a namespace allow for identically named entities
    //              as long as the namespaces are different
    
    std::string name = "Mate";
    std::cout << "hello " << name << '\n';



    std::cout << first::x;

    return 0;
}