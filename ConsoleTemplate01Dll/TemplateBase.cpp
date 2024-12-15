#include "pch.h"
#include "TemplateBase.h"


template<typename T>
TemplateBase<T>::TemplateBase() = default;


template<typename T>
T TemplateBase<T>::add_num(T a, T b)
{
    std::cout << "templateBase::add_num" << '\n';
    return T(a + b);
}
