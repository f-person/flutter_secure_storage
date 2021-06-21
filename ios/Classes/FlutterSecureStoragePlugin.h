#import <Flutter/Flutter.h>

@interface FlutterSecureStoragePlugin : NSObject<FlutterPlugin>

- (NSString *) read:(NSString *)key forGroup:(NSString *)groupId;

@end
