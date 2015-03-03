#import <Foundation/Foundation.h>
#import "SWGObject.h"


@interface SamiTrialsDeviceTypeInfo : SWGObject

@property(nonatomic) NSString* dtid;  /* Device Type ID.  */
- (id) dtid: (NSString*) dtid;
    

- (id) initWithValues: (NSDictionary*)dict;
- (NSDictionary*) asDictionary;

@end
