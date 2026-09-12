#include <iostream>
#include <string>

struct student
{
    std::string name;
    double gpa;
    bool enrolled = true;
};

struct song
{
    std::string name;
    double time;
    int views;
    bool listened = false;
};

int main()
{
    // struct = a structure that group realted variables under one name
    //           structs can contain many different data types(string,int,double,bool,ect.)
    //           variables in a struct are known as "members"
    //           members can be acces with. "Class Member Acces Operator"

    student student1;
    student1.name = "fity";
    student1.gpa = 3.2;

    student student2;
    student2.name = "helo";
    student2.gpa = 2.1;

    student student3;
    student3.name = "szia";
    student3.gpa = 4.7;

    std::cout << student1.name << '\n';
    std::cout << student1.gpa << '\n';
    std::cout << student1.enrolled << '\n';

    std::cout << student2.name << '\n';
    std::cout << student2.gpa << '\n';
    std::cout << student2.enrolled << '\n';

    std::cout << student3.name << '\n';
    std::cout << student3.gpa << '\n';
    std::cout << student3.enrolled << '\n';

    std::cout << "practice:\n\n";

    //      practice                //

    song song1;
    song1.name = "aha-aha";
    song1.time = 2.5;
    song1.views = 250000;
    song1.listened = true;

    song song2;
    song2.name = "ordog norika";
    song2.time = 3.18;
    song2.views = 680000;
    song2.listened;

    std::cout << song1.name << '\n';
    std::cout << song1.time << '\n';
    std::cout << song1.views << '\n';
    std::cout << song1.listened << '\n';

    std::cout << song2.name << '\n';
    std::cout << song2.time << '\n';
    std::cout << song2.views << '\n';
    std::cout << song2.listened << '\n';

    return 0;
}