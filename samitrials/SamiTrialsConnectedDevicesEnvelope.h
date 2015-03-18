#import <Foundation/Foundation.h>
#import "SWGObject.h"
#import "SamiTrialsConnectedDeviceArray.h"


@interface SamiTrialsConnectedDevicesEnvelope : SWGObject

@property(nonatomic) NSNumber* count;  
@property(nonatomic) SamiTrialsConnectedDeviceArray* data;  
@property(nonatomic) NSNumber* offset;  
@property(nonatomic) NSNumber* total;  
- (id) count: (NSNumber*) count     
    data: (SamiTrialsConnectedDeviceArray*) data     
    offset: (NSNumber*) offset     
    total: (NSNumber*) total;
    

- (id) initWithValues: (NSDictionary*)dict;
- (NSDictionary*) asDictionary;

@end
