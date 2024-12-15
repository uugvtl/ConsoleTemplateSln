#pragma once
#ifdef TEMPLATE_DLL_TEST_EXPORTS
#define TEMPLATE_DLL_API __declspec(dllexport)
#else
#define TEMPLATE_DLL_API __declspec(dllimport)
#endif

class TEMPLATE_DLL_API TemFunBase
{
public:
    TemFunBase() = default;
    ~TemFunBase() = default;

    TemFunBase(const TemFunBase&) = default;
    TemFunBase& operator=(const TemFunBase&) = default;

    TemFunBase(TemFunBase&&) noexcept = default;
    TemFunBase& operator=(TemFunBase&&) noexcept = default;

    template <typename T>
    T add_num(T a, T b);
};



//注意这里与导出类的区别
template TEMPLATE_DLL_API double TemFunBase::add_num<double>(double, double);
template TEMPLATE_DLL_API int TemFunBase::add_num<int>(int, int);
