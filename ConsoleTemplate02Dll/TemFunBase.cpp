#include "pch.h"
#include "TemFunBase.h"



template<typename T>
T TemFunBase::add_num(T a, T b)
{
    std::cout << "TemFunBase::add_num" << '\n';
    return T(a + b);
}
