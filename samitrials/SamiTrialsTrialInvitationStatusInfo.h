#import <Foundation/Foundation.h>
#import "SWGObject.h"


@interface SamiTrialsTrialInvitationStatusInfo : SWGObject

@property(nonatomic) NSString* status;  /* Invitation Status.  */
- (id) status: (NSString*) status;
    

- (id) initWithValues: (NSDictionary*)dict;
- (NSDictionary*) asDictionary;

@end
