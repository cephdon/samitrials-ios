#import <Foundation/Foundation.h>
#import "SWGObject.h"
#import "SamiTrialsDeviceTypeArray.h"


@interface SamiTrialsDeviceTypesEnvelope : SWGObject

@property(nonatomic) NSNumber* count;  
@property(nonatomic) SamiTrialsDeviceTypeArray* data;  
@property(nonatomic) NSNumber* offset;  
@property(nonatomic) NSNumber* total;  
- (id) count: (NSNumber*) count     
    data: (SamiTrialsDeviceTypeArray*) data     
    offset: (NSNumber*) offset     
    total: (NSNumber*) total;
    

- (id) initWithValues: (NSDictionary*)dict;
- (NSDictionary*) asDictionary;

@end
