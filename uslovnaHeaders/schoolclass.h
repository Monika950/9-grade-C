#ifndef SCHOOLCLASS
#define SCHOOLCLASS 1
#include"person.h"
struct Schoolclass
{
    struct Person students[26];
    char Class;
    int nomer;
    struct Person teacher;
    
};
#endif