//
//  SRVApplicationDelegateService.h
//
//  Created by Joseph Lorich on 3/20/14.
//  Copyright (c) 2014 Joseph Lorich.
//

#import <UIKit/UIKit.h>

/**
 * Represents an application delegate service object
 */
@interface SRVApplicationDelegateService : NSObject <UIApplicationDelegate>

/**
 * Returns the shared singleton app delegate service object.  Create it if needed.
 */
+ (instancetype)shared;

@end
