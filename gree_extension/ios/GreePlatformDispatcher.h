#import "GreePlatform.h"
#import "GreePlatformSettings.h"

#import "cocos-gree-ext.h"


@interface GreePlatformDispatcher : NSObject <GreePlatformDelegate>{

}

/** GreePlatformDispatcher singleton */
+(GreePlatformDispatcher *) sharedGreePlatformDispatcher;

@end
