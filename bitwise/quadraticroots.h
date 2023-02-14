#ifndef ROOTS
#define ROOTS
struct QuadraticRootsResult
{
    long double x1,x2;
    int norealroots;
};
struct QuadraticRootsResult findroots (long double a,long double b,long double c);
#endif