#import <Foundation/Foundation.h>
#import "SWGObject.h"
#import "SamiTrialsTrialInvitation.h"


@interface SamiTrialsTrialInvitationArray : SWGObject

@property(nonatomic) NSArray* invitations;  
- (id) invitations: (NSArray*) invitations;
    

- (id) initWithValues: (NSDictionary*)dict;
- (NSDictionary*) asDictionary;

@end
