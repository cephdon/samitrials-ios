#import <Foundation/Foundation.h>
#import "SWGObject.h"
#import "SamiTrialsTrialInvitation.h"


@interface SamiTrialsTrialInvitationEnvelope : SWGObject

@property(nonatomic) SamiTrialsTrialInvitation* data;  
- (id) data: (SamiTrialsTrialInvitation*) data;
    

- (id) initWithValues: (NSDictionary*)dict;
- (NSDictionary*) asDictionary;

@end
