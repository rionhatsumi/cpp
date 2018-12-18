---
title:"cpp primer plus"
output:"pdf document"
---
# C++ Prime Plus Edition 6
cpp learning<!-- 2018-11-10 -->

<!-- 2018-11-14 -->
## Capter 9 内存模型和名称空间
1. 单独编译
1. 储存持续性、作用域和链接性
    1. 作用域和链接
    1. 自动存储持续性
    1. 静态持续变量

        |存储描述|持续性|作用域|链接性|如何声明|
        |:----:|------|:-----:|:---:|:-------:|
        |自动|自动|代码块|无|在代码块中|
        |寄存器|自动|代码块|无|在代码块中，使用关键字register|
        |静态，无链接性|静态|代码块|无|在代码块中，使用关键字static|
        |静态，外部链接性|静态|文件|外部|不再任何函数内|
        |静态，内部链接性|静态|文件|内部|不在任何函数内，使用关键字static|

    1. 静态持续性、外部链接性
    1. 静态持续性、内部链接性
    1. 静态存储持续性、无链接性
    1. 说明符和限定符
        * auto
        * register
        * static
        * extern
        * thread_local
        * mutable
        1. cv- const volatile
        1. mutalbe

    1. 函数和链接性
    1. 语言链接性
    1. 存储方案和动态分配
        1. 使用new运算符初始化
        1. new失败时
        1. new: 运算符、函数和替换函数
        1. 定位new运算符
        1. 定位new的其他形式

1. 名称空间
    1. 传统的C++名称空间
    1. 新的名称空间特性
        1. using声明和using编译指令
        1. using编译指令和using声明之比较
        1. 名称空间的其他特性
        1. 未命名的名称空间
    1. 名称空间实例
    1. 名称空间及其前途
1. 总结
***
<!-- 2018-11-22 -->
## Capter 10 对象和类
1. 过程性编程和面向对象编程
2. 抽象和类
    1. 类型是什么
    2. C++中的类
        1. 访问控制
        2. 控制对成员的访问：共有还是私有
    3. 实现类成员函数
        1. 成员函数说明
        2. 内联方法
        3. 方法使用哪个对象
        4. 实用类
        5. 修改实现
        6. 小结
3. 类的构造函数和析构函数
    1. 声明和定义构造函数
    2. 使用构造函数
    3. 默认构造函数
    4. 析构函数
    5. 改进Stock类
        1. 头文件
        2. 实现文件
        3. 客户文件
        4. 程序说明
        5. C++11列表初始化
        6. const 成员函数
        ```cpp
        void show() const;
        void stock::show() const
        ```
    6. 构造函数和析构函数小结
4. this指针
5. 对象数组
6. 类作用域
    1. 作用于为类的常量
        ```cpp
        enum{Months = 12};
        static const int Months = 12;
        ```
    2. 作用域内枚举(C++11)
        ```cpp
        enum class egg{Small, Medium, Large, Jumbo};
        enum class t_shirt{Small, Medium, Large, Xlarge};
        egg choice = egg::Large;
        t_shirt Floyd = t_shirt::Large;
        ```
7. 抽象数据类型







***
## capter 12 类和动态内存分配
1. Stringbad
1. Sayings
1. Placenew

