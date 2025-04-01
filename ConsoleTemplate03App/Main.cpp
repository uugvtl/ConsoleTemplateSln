// ConsoleTemplate03App.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

template <typename T>
class A
{
public:
    void print();

};

template<typename T>
void A<T>::print()
{
    std::cout << "A" << "\n";
}




class B
{
private:
    A<int> a;
public:
    void print()
    {
        std::cout << "B" << "\n";
        a.print();
    }
};





template <typename T>
class A1
{
public:
    void print();

};

template<typename T>
void A1<T>::print()
{
    std::cout << "A1" << "\n";
}

template <template <typename X> class T>
class B1
{
private:
    T<int> a;
public:
    void print();
};

template<template <typename X> class T>
void B1<T>::print()
{
    std::cout << "B1" << "\n";
    a.print();
    
}





int main()
{
    // A<int> a;
    // a.print();

    B b;
    b.print();

    B1<A1> b1;
    b1.print();


    return 0;
}

