#import <Foundation/Foundation.h>
#import "SWGObject.h"
#import "SamiTrialsTrial.h"


@interface SamiTrialsTrialEnvelope : SWGObject

@property(nonatomic) SamiTrialsTrial* data;  
- (id) data: (SamiTrialsTrial*) data;
    

- (id) initWithValues: (NSDictionary*)dict;
- (NSDictionary*) asDictionary;

@end
