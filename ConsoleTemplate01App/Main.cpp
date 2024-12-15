#include"TemplateBase.h"
#include <iostream>


int main()
{
    TemplateBase<int>tb1{};
    const auto addnum1 = tb1.add_num(3, 2);


    TemplateBase<double>tb2{};
    const auto addnum2 = tb2.add_num(3.3, 2.2);

    std::cout << addnum1 << '\n';
    std::cout << addnum2 << '\n';

    std::cout << "hello world" << '\n';

}
