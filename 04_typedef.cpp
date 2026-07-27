#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairlist_t;

//typedef std::string text_t;
//typedef int number_t;

using text_t = std::string;
using number_t = int;
using tf_t = bool;

int main(){
    //typedef = reserved keyword used to create and additional name
    //          (alias) for another data type
    //          new identifier for an existing type
    //          help with readability and reduces typos
    //          use when there is a clear benefit
    //          replaced with 'using' (work better w templates)

    //pairlist_t pairlist;
    

    text_t firstname = "mate";
    number_t h = 16;
    tf_t isstudent = true;

    std::cout << firstname << '\n';
    std::cout << h << '\n';
    std::cout << isstudent;


    return 0;
}
