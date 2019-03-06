#include <iostream>
#include "QuadraticFunc.h"
#define PREC 5

main()
{
    std::cout.precision(PREC);

    std::cout << "This program shows basic usage of QuadraticFunc class and its methods.\n"
        << "Creating new QuadraticFunc with constructor without parameters..." << std::endl;
    QuadraticFunc func1;

    std::cout << "\nCreated func1 without parameters. Set its factors." << std::endl;
    func1.changeFactors();

    std::cout << "\nNow let's count it's discriminant and roots." << std::endl;
    func1.countComponents();
    func1.showDiscr();
    func1.showRoots();

    std::cout << "\nGreat! Now let's use the other constructor..." << std::endl;
    QuadraticFunc* func2 = new QuadraticFunc(1, 2, 1);

    std::cout << "We've successfully created func2! Let's take a look at its factors and roots" << std::endl;
    func2->showFactors();
    func2->showDiscr();
    func2->showRoots();
    delete func2;
}
