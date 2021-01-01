//
//  AppDelegate.h
//  CPlusPlusDemo
//
//  Created by 卓春才 on 2021/1/1.
//  Copyright © 2021年 antinust. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

