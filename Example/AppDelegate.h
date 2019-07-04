//
//  AppDelegate.h
//  Example
//
//  Created by Nate Brock on 7/4/19.
//  Copyright © 2019 Haploo LLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

