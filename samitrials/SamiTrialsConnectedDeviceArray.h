#import <Foundation/Foundation.h>
#import "SWGObject.h"
#import "SamiTrialsConnectedDevice.h"


@interface SamiTrialsConnectedDeviceArray : SWGObject

@property(nonatomic) NSArray* devices;  
- (id) devices: (NSArray*) devices;
    

- (id) initWithValues: (NSDictionary*)dict;
- (NSDictionary*) asDictionary;

@end
