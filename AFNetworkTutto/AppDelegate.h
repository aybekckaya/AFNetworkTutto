//
//  AppDelegate.h
//  AFNetworkTutto
//
//  Created by aybek can kaya on 26/12/2017.
//  Copyright © 2017 aybek can kaya. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

