#import <Foundation/Foundation.h>
#import "SWGObject.h"
#import "SamiTrialsDeviceType.h"


@interface SamiTrialsDeviceTypeArray : SWGObject

@property(nonatomic) NSArray* deviceTypes;  
- (id) deviceTypes: (NSArray*) deviceTypes;
    

- (id) initWithValues: (NSDictionary*)dict;
- (NSDictionary*) asDictionary;

@end
