#import <Foundation/Foundation.h>
#import "SWGObject.h"
#import "SamiTrialsTrialUserDeviceRel.h"


@interface SamiTrialsTrialUserDeviceRelEnvelope : SWGObject

@property(nonatomic) SamiTrialsTrialUserDeviceRel* data;  
- (id) data: (SamiTrialsTrialUserDeviceRel*) data;
    

- (id) initWithValues: (NSDictionary*)dict;
- (NSDictionary*) asDictionary;

@end
