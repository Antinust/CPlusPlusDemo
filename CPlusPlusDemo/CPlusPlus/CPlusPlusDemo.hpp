//
//  CPlusPlusDemo.hpp
//  CPlusPlusDemo
//
//  Created by 卓春才 on 2021/1/1.
//  Copyright © 2021年 antinust. All rights reserved.
//

#ifndef CPlusPlusDemo_hpp
#define CPlusPlusDemo_hpp

#include <stdio.h>


class CPlusPlusDemo {
    
// 公共方法，既供外部类和接口访问的，放在public里面
public:

    CPlusPlusDemo();
    
    // 构造函数
    CPlusPlusDemo(const char* cstr);
    
    // 拷贝构造函数
    CPlusPlusDemo(CPlusPlusDemo &demo);
    
    // 拷贝赋值函数
    CPlusPlusDemo & operator=(const CPlusPlusDemo &demo);

    // 析构函数
    ~CPlusPlusDemo();
    
    void print();
    
// 私有方法和属性放在 private:后面
private:
    
    char *m_data;
};

#endif /* CPlusPlusDemo_hpp */
