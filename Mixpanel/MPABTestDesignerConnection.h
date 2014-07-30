//
// Copyright (c) 2014 Mixpanel. All rights reserved.

#import <Foundation/Foundation.h>
#import "MPWebSocket.h"

@protocol MPABTestDesignerMessage;

extern NSString *const kSessionVariantKey;

@interface MPABTestDesignerConnection : NSObject

@property (nonatomic, assign) BOOL connected;
@property (nonatomic, assign) BOOL sessionEnded;

- (id)initWithURL:(NSURL *)url;

- (void)setSessionObject:(id)object forKey:(NSString *)key;
- (id)sessionObjectForKey:(NSString *)key;
- (void)sendMessage:(id<MPABTestDesignerMessage>)message;
- (void)close;

@end
