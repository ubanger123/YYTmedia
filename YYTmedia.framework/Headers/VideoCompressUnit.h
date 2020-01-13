//
//  VideoCompressUnit.h
//  YYTmedia
//
//  Created by Miday on 2018/2/1.
//  Copyright © 2018 Miday. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface VideoCompressUnit : NSObject
+ (void)compression:(NSURL *)videoUrl successBlock:(void(^)(NSURL *videoUrl))successBlock failureBlock:(void(^)(NSError *error))failureBlock;
+ (void)createGIFfromURL:(NSURL*)videoURL withFrameCount:(int)frameCount delayTime:(float)delayTime loopCount:(int)loopCount needCompression:(BOOL)isNeedCompression andCompressionWidth:(float)compressionWidth andCompressionHight:(float)compressionHigth andFileName:(NSString*)filleName completion:(void(^)(NSString *GifPath))completionBlock;
+(CGSize)getVideoOrang:(NSURL *)videoUrl estimatedWidth:(CGFloat)estimatedWidth transitionWidth:(CGFloat)transitionWidth;
@end
