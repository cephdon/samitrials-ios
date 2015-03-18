#import <Foundation/Foundation.h>
#import "SWGObject.h"


@interface SamiTrialsTrialInvitationInfo : SWGObject

@property(nonatomic) NSString* email;  /* Email address of the user  */
@property(nonatomic) NSString* invitationType;  /* User role.  */
- (id) email: (NSString*) email     
    invitationType: (NSString*) invitationType;
    

- (id) initWithValues: (NSDictionary*)dict;
- (NSDictionary*) asDictionary;

@end
