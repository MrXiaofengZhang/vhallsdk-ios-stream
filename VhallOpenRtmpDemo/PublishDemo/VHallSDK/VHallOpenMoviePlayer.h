//
//  VHallOpenMoviePlayer.h
//  VHLivePlay
//
//  Created by liwenlong on 16/2/16.
//  Copyright © 2016年 vhall. All rights reserved.
//

#import "VHMoviePlayer.h"

@interface VHallOpenMoviePlayer : VHMoviePlayer
{
    
}
/**
 *  初始化VHMoviePlayer对象
 *
 *  @param delegate
 *
 *  @return   返回VHMoviePlayer的一个实例
 */
- (instancetype)initWithDelegate:(id <VHMoviePlayerDelegate>)delegate;

/**
 *  开始播放视频
 *
 *  @param activityId  活动id
 */
-(BOOL)startPlay:(NSString*)streamName ;

/**
 *  观看直播视频   (仅HLS可用)
 *
 *  @param activityId            活动id
 *  @param url                   直播服务器地址
 *  @param moviePlayerController MPMoviePlayerController 对象
 */
-(void)startPlay:(NSString*)streamName moviePlayer:(MPMoviePlayerController *)moviePlayerController;

/**
 *  观看回放视频   (仅HLS可用)
 *
 *  @param activityId            活动id
 *  @param moviePlayerController MPMoviePlayerController 对象
 */
-(void)startPlayback:(NSString*)streamName moviePlayer:(MPMoviePlayerController *)moviePlayerController;

/**
 *  设置静音
 *
 *  @param mute 是否静音
 */
- (void)setMute:(BOOL)mute;

/**
 *  设置系统声音大小
 *
 *  @param size float  [0.0~1.0]
 */
+ (void)setSysVolumeSize:(float)size;

/**
 *  获取系统声音大小
 */
+ (float)getSysVolumeSize;

/**
 *  停止播放
 */
-(void)stopPlay;

/**
 *  销毁播放器
 */
- (void)destroyMoivePlayer;

@end
