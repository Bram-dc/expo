#import <Foundation/Foundation.h>
#import <ABI48_0_0React/ABI48_0_0RCTViewManager.h>

NS_ASSUME_NONNULL_BEGIN

@interface ABI48_0_0RCTOnPageSelected : NSObject <ABI48_0_0RCTEvent>

- (instancetype) initWithABI48_0_0ReactTag:(NSNumber *)ABI48_0_0ReactTag
                         position:(NSNumber *)position
                    coalescingKey:(uint16_t)coalescingKey;

@end

NS_ASSUME_NONNULL_END
