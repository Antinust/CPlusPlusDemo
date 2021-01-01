//
//  ViewController.m
//  CPlusPlusDemo
//
//  Created by 卓春才 on 2021/1/1.
//  Copyright © 2021年 antinust. All rights reserved.
//

#import "ViewController.h"
#import "CPlusPlus/CPlusPlusDemo.hpp"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
#warning entrance
    // 栈上对象 无需手动释放，出作用域空间 系统自动释放
    CPlusPlusDemo demo;
    demo.print();
    
    // 调用默认构造函数，用new申请的对象，在堆中，需要用delete释放
    const char* str = "hello";
    CPlusPlusDemo *demo1 = new CPlusPlusDemo(str);
    demo1->print();

    // 调用拷贝构造函数
    CPlusPlusDemo demo2(*demo1);

    // 调用拷贝赋值函数
    CPlusPlusDemo demo3 = demo2;
    
    delete demo1;
}


@end
