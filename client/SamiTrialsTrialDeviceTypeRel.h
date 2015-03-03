#import <Foundation/Foundation.h>
#import "SWGObject.h"


@interface SamiTrialsTrialDeviceTypeRel : SWGObject

@property(nonatomic) NSString* dtid;  
@property(nonatomic) NSString* tid;  
- (id) dtid: (NSString*) dtid     
    tid: (NSString*) tid;
    

- (id) initWithValues: (NSDictionary*)dict;
- (NSDictionary*) asDictionary;

@end
