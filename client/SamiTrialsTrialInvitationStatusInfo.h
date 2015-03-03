#import <Foundation/Foundation.h>
#import "SWGObject.h"
#import "SamiTrialsTrialInvitationUpdateStatus.h"


@interface SamiTrialsTrialInvitationStatusInfo : SWGObject

@property(nonatomic) SamiTrialsTrialInvitationUpdateStatus* status;  /* Invitation Status.  */
- (id) status: (SamiTrialsTrialInvitationUpdateStatus*) status;
    

- (id) initWithValues: (NSDictionary*)dict;
- (NSDictionary*) asDictionary;

@end
