#import <Foundation/Foundation.h>
#import "SWGObject.h"
#import "SamiTrialsTrialParticipantRel.h"


@interface SamiTrialsTrialParticipantRelEnvelope : SWGObject

@property(nonatomic) SamiTrialsTrialParticipantRel* data;  
- (id) data: (SamiTrialsTrialParticipantRel*) data;
    

- (id) initWithValues: (NSDictionary*)dict;
- (NSDictionary*) asDictionary;

@end
