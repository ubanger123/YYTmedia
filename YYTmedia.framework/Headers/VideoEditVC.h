//
//  VideoEditVC.h
//  YYTmedia
//
//  Created by Miday on 2018/1/26.
//  Copyright © 2018 Miday. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface VideoEditVC : UIViewController
@property(nonatomic,copy)void (^editBlock)(NSURL *url);
@property(nonatomic,copy)void (^errorBlock)(NSString *error);
/*
 待编辑视频的URL
 */
@property (nonatomic, strong) NSURL *videoUrl;

/**
 * 默认为YES NO：不显示视频帧并不可编辑剪切视频
 */
@property (nonatomic, assign) BOOL isEdit;

@end
