#include <iostream>
#include <cmath>
#include "QuadraticFunc.h"

//constructors
QuadraticFunc::QuadraticFunc() : a(0), b(0), c(0)
{
}

QuadraticFunc::QuadraticFunc(int fa, int fb, int fc) : a(fa), b(fb), c(fc)
{
    this->countComponents();
}

//methods
void QuadraticFunc::showFactors()
{
    std::cout << "Factor \"a\": " << a
        << "\nFactor \"b\": " << b
        << "\nFactor \"c\": " << c << std::endl;
}

void QuadraticFunc::changeFactors()
{
    std::cout << "Please write your new factors individually: " << std::endl;
    std::cout << "a: ";
    std::cin >> a;
    std::cout << "b: ";
    std::cin >> b;
    std::cout << "c: ";
    std::cin >> c;
    std::cout << "Your new factors are: "
        << a << ", " << b << ", " << c << std::endl;
}

void QuadraticFunc::countComponents()
{
    discr = b*b - 4*a*c;    //discriminant = b^2-4ac
    if(discr == 0){
        x1 = -b/(2*a);
        x2 = NAN;           //not a number from cmath library
    } else if(discr > 0){
        x1 = (-b-sqrt(discr))/(2*a);
        x2 = (-b+sqrt(discr))/(2*a);
    } else{
        x1 = x2 = NAN;
    }
}

void QuadraticFunc::showDiscr()
{
    std::cout << "Discriminant of your function: " << discr << std::endl;
}

void QuadraticFunc::showRoots()
{
    if(!std::isnan(x1)){
        std::cout << "Root #1: " << x1 << std::endl;
        if(!std::isnan(x2)){
            std::cout << "Root #2: " << x2 << std::endl;
        }
    } else{
        std::cout << "Function with such factors does not have any roots!" << std::endl;
    }

}
