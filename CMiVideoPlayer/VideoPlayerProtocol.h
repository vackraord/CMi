//
//  VideoPlayerProtocol.h
//  CMiVideoPlayer
//
//  Created by Anders Hovmöller on 2011-10-02.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol VideoPlayerProtocol <NSObject>
- (id)initWithParentWindow:(NSWindow*)window;
- (void)openURL:(NSURL*)url;
- (void)play;
- (void)pause;
- (void)stop;
- (void)setVolume:(float)volume;
- (void)setCurrentTime:(float)time;
- (void)stepForward;
- (void)stepBackward;
- (void)setHidden:(BOOL)b;

- (float)volume;
- (float)currentTime;
- (float)duration;

@end
