/*
    Cheap1 习惯C++
*/

/*
    条款1 视C++为一个语言联邦
        C++ = C + C with Classes + Template C++ + STL 
*/

/*
    条款2 尽量使用const,enum,inlin替换#define
        - 尽量用编译器去替换预处理器
        - symbol table概念
*/

/*
    条款3 尽可能使用const
        - const * 被指物是常量   指向的东西不能变 可以指向别的地址
          * const 指针自身是常量 只能指向这个地址 指向的东西可以变
        - const成员函数
            用法看八股
        -bitwise constness与logical constness(?)
        - mutable(?)
        - non-const与const 
            代码复用
            non-const调用const中const_cast、static_cast的使用
*/

/*
    条款4 确定对象被使用前已被初始化
        - 类的初始化动作早于构造函数
            尽量使用初始化列表
            在构造函数中赋值会多调一次成员的构造函数
*/