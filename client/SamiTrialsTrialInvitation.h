#import <Foundation/Foundation.h>
#import "SWGObject.h"
#import "SamiTrialsTrialInvitationStatus.h"
#import "SamiTrialsTrialGroupType.h"
#import "SWGDate.h"


@interface SamiTrialsTrialInvitation : SWGObject

@property(nonatomic) SWGDate* acceptedDate;  
@property(nonatomic) NSString* email;  
@property(nonatomic) SWGDate* expirationDate;  
@property(nonatomic) NSString* _id;  
@property(nonatomic) SamiTrialsTrialGroupType* invitationType;  
@property(nonatomic) SWGDate* revokedDate;  
@property(nonatomic) SWGDate* sentDate;  
@property(nonatomic) SamiTrialsTrialInvitationStatus* status;  
@property(nonatomic) NSString* tid;  
- (id) acceptedDate: (SWGDate*) acceptedDate     
    email: (NSString*) email     
    expirationDate: (SWGDate*) expirationDate     
    _id: (NSString*) _id     
    invitationType: (SamiTrialsTrialGroupType*) invitationType     
    revokedDate: (SWGDate*) revokedDate     
    sentDate: (SWGDate*) sentDate     
    status: (SamiTrialsTrialInvitationStatus*) status     
    tid: (NSString*) tid;
    

- (id) initWithValues: (NSDictionary*)dict;
- (NSDictionary*) asDictionary;

@end
