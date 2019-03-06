#ifndef QUADRATICFUNC_H
#define QUADRATICFUNC_H

class QuadraticFunc
{
//private
    int a, b, c;    //factors
    int discr;      //discriminant
    double x1, x2;  //roots
public:
    QuadraticFunc();
    QuadraticFunc(int fa, int fb, int fc);
    void changeFactors();
    void showFactors();
    void countComponents();
    void showDiscr();
    void showRoots();
};

#endif // QUADRATICFUNC_H
