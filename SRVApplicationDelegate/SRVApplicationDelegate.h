//
//  SRVApplicationDelegate.h
//
//  Created by Joseph Lorich on 3/20/14.
//  Copyright (c) 2014 Joseph Lorich.
//

#import <UIKit/UIKit.h>

@class SRVApplicationDelegateService;

/**
 * A service-oritented UIApplicationDelegate
 */
@interface SRVApplicationDelegate : UIResponder


#pragma mark - Properties

/// An array of AppDelegate service objects
@property (strong, readonly) NSArray *services;

/// The main UIWindow for the application
@property (strong, nonatomic) UIWindow *window;


#pragma mark - Methods

/**
 * Executes the given selector on all appropriate services
 *
 * @param selector The method selector to call on the services
 * @param argument A pointer to the argument to be passed along
 */
- (void)invokeServiceMethodWithSelector:(SEL)selector withArgument:(void*)argument;

/**
 * Registers a new service with the app delegate
 * @param service The service to register
 */
- (void) registerService:(SRVApplicationDelegateService *)service;


@end
