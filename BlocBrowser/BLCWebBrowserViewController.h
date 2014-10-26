//
//  BLCWebBrowserViewController.h
//  BlocBrowser
//
//  Created by Colt Hansen on 10/25/14.
//  Copyright (c) 2014 Colt Hansen. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BLCWebBrowserViewController : UIViewController

/**
 Replaces the web view with a fresh one, erasing all history. Also updates the URL field and toolbar buttons appropriately.
 */
- (void) resetWebView;

@end
