//.h文件
#pragma once

//添加导出宏定义
#ifdef TEMPLATE_DLL_EXPORTS
#define TEMPLATE_DLL_API __declspec(dllexport)
#else
#define TEMPLATE_DLL_API __declspec(dllimport)
#endif


template<typename T>
//这里不用添加导出符号,注意与普通类的区别（非模板类这里要添加导出符号）
class  TemplateBase
{
public:
    TemplateBase();


    T add_num(T a, T b);
};


//在cpp文件中告诉编译器导出实例化之后的类，必须实例化才行
template class TEMPLATE_DLL_API TemplateBase<double>;
template class TEMPLATE_DLL_API TemplateBase<int>;