#include <iostream>
#include <cstdlib> //for rand()
#include <ctime>   //for time()

//Used Namespaces
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int randNum{}, min{1}, max{6}; //min-1,max-6 : inclusive
    size_t count{10};

    /*
    ! seed the random number generator
    * if not seeded same sequence of random number will appear in every run
    */

    cout << "RAND_MAX on my system is : " << RAND_MAX << endl;
    srand(time(nullptr));
    //seeding random generator by system time

    //generating 10 random numbers
    for (size_t i{1}; i <= count; i++)
    {
        randNum = rand() % (max - min + 1) + min; //genrating random number between [min,max]
        cout << randNum << endl;
    }

    cout << endl;
    
    return 0;
}
