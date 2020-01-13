//
//  DragEditView.h
//  YYTmedia
//
//  Created by Miday on 2018/5/3.
//  Copyright © 2018 Miday. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DragEditView : UIView

- (instancetype)initWithFrame:(CGRect)frame Left:(BOOL)left;

@property (assign, nonatomic) UIEdgeInsets hitTestEdgeInsets;

- (BOOL)pointInsideSelf:(CGPoint)point;

- (BOOL)pointInsideImgView:(CGPoint)point;

@end
