//
//  CPlusPlusDemo.cpp
//  CPlusPlusDemo
//
//  Created by 卓春才 on 2021/1/1.
//  Copyright © 2021年 antinust. All rights reserved.
//

#include "CPlusPlusDemo.hpp"
#include <iostream>

CPlusPlusDemo::CPlusPlusDemo() {
    std::cout << "Constructor string:NULL\r\n";
    m_data = new char[1];
    *m_data = '\0';
}

CPlusPlusDemo::CPlusPlusDemo(const char* cstr) {
    std::cout << "Constructor string:cstr\r\n";
    if (cstr) {
        m_data = new char[strlen(cstr) +1];
        strcpy(m_data, cstr);
    } else {
        // 未指定初值
        m_data = new char[1];
        *m_data = '\0';
    }
}

// 释放这个类申请的资源，比如内存，cpu，其他
CPlusPlusDemo::~CPlusPlusDemo() {
    if (m_data) {
        delete [] m_data;
    }
    std::cout << "~ Destructor\r\n";
}

CPlusPlusDemo::CPlusPlusDemo(CPlusPlusDemo &demo) {
    m_data = new char[strlen(demo.m_data) + 1];
    strcpy(m_data, demo.m_data);
}

CPlusPlusDemo &CPlusPlusDemo::operator=(const CPlusPlusDemo &demo) {
    if (this == &demo) {
        return *this;
    }
    delete []m_data;
    m_data = new char[strlen(demo.m_data) + 1];
    strcpy(m_data, demo.m_data);
    return *this;
}

void CPlusPlusDemo::print() {
    std::cout << "print 1\r\n";
    printf("print 2\r\n");
}

