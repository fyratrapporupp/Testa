//
//  TestaAppDelegate.h
//  Testa
//
//  Created by Ronnie Persson on 2011-02-07.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TestaViewController;

@interface TestaAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet TestaViewController *viewController;

@end
