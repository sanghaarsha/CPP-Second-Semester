#include <iostream>
#include <string>
//Used Classes from namespace 'std'
using std::cin;
using std::cout;
using std::endl;

class Student
{
    // Encapsulation is all about putting attributes and methods together

    // attributes
private:
    std::string name, father, mother;
    int rank;
    double totalPercent;

    // methods
public:
    void hasPassed(double totalPercent)
    {
        if (totalPercent > 50)
            cout << "Passed" << endl;
        else
            cout << "Failed" << endl;
    };
    void checkRank(int rank)
    {
        cout << rank << endl;
    };
    void parents(std::string father, std::string mother)
    {
        cout << "Father: " << father << ", Mother: " << mother << endl;
    };
};

int main()
{
    Student mark; // mark is an object of student class

    mark.hasPassed(78);
    mark.checkRank(123);
    mark.parents("John", "Mailey");

    return 0;
}
