#import <Foundation/Foundation.h>
#import "SWGObject.h"


@interface SamiTrialsDeviceInfo : SWGObject

@property(nonatomic) NSString* did;  /* Device ID.  */
- (id) did: (NSString*) did;
    

- (id) initWithValues: (NSDictionary*)dict;
- (NSDictionary*) asDictionary;

@end
