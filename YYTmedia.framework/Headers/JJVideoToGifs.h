//
//  JJVideoToGifs.h
//  YYTmedia
//
//  Created by Miday on 2018/2/7.
//  Copyright © 2018 Miday. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Photos/Photos.h>

typedef void(^videoModelBlock)(id video);
@interface JJVideoToGifs : NSObject
+(instancetype)shareVideo;
- (void)createGIFfromURL:(NSURL*)videoURL withFrameCount:(int)frameCount delayTime:(float)delayTime loopCount:(int)loopCount needCompression:(BOOL)isNeedCompression andCompressionWidth:(float)compressionWidth andCompressionHight:(float)compressionHigth andFileName:(NSString*)filleName completion:(void(^)(NSString *GifPath))completionBlock;
@end
