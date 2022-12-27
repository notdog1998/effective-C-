/*
    cheap2 构造/析构/赋值运算
*/

/*
    条款5 了解C++默默编写并调用了哪些函数（Class）
*/
// class Empty {} 等价与↓
class Empty {
public:
    Empty() {}                              // default构造
    Empty(const Empty& rhs) {}              // copy构造
    ~Empty() {}                             // 析构 non-virtual

    Empty& operator=(const Empty& rhs) {}   // copy assignment操作符
};
// 只有这些函数被调用时，才会被编译器（自动）创建


/*
    条款6 若不想使用编译器自动生成的函数，就应该明确拒绝
        - 声明称private member成员和友元调用会出问题
        - private继承uncopy类
*/

/*
    条款7 为多态基类声明virtual析构
        - 虚析构 delete基类指针时会调用派生类的
        - vptr会使class的体积膨胀，不利于移植等操作 
          当classe设计的目的不是作为base classe使用，就不应该声明虚析构
        - 纯虚析构 纯虚函数会导致抽象类(抽象类不可被实体化)
          如果希望一个抽象类可以作为一个基类使用，可以申明纯虚析构（但是要提供定义）
            
*/