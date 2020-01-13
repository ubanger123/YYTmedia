//
//  TTYMediaListBaseController.h
//  YYTmedia
//
//  Created by Miday on 2018/2/17.
//  Copyright © 2018 Miday. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TTYMediaListBaseController : UIViewController

- (void) initNavigationBarTransparent;

- (void) setBackgroundColor:(UIColor *)color;

- (void) setTranslucentCover;

- (void) initLeftBarButton:(NSString *)imageName;

- (void) setStatusBarHidden:(BOOL) hidden;

- (void) setStatusBarBackgroundColor:(UIColor *)color;

- (void) setNavigationBarTitle:(NSString *)title;

- (void) setNavigationBarTitleColor:(UIColor *)color;

- (void) setNavigationBarBackgroundColor:(UIColor *)color;

- (void) setNavigationBarBackgroundImage:(UIImage *)image;

- (void) setStatusBarStyle:(UIStatusBarStyle)style;

- (void) setNavigationBarShadowImage:(UIImage *)image;

- (void) back;

- (CGFloat) navagationBarHeight;

- (void) setLeftButton:(NSString *)imageName;

- (void) setBackgroundImage:(NSString *)imageName;

- (nullable UIViewController *)destinationViewControllerFromViewController:(UIViewController *)fromViewController;
-(void)doneAction;

@end
