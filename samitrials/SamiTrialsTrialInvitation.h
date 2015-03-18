#import <Foundation/Foundation.h>
#import "SWGObject.h"


@interface SamiTrialsTrialInvitation : SWGObject

@property(nonatomic) NSNumber* acceptedDate;  /* acceptedDate  */
@property(nonatomic) NSString* email;  /* email  */
@property(nonatomic) NSNumber* expirationDate;  /* expirationDate  */
@property(nonatomic) NSString* _id;  /* id  */
@property(nonatomic) NSString* invitationType;  /* invitationType  */
@property(nonatomic) NSNumber* revokedDate;  /* revokedDate  */
@property(nonatomic) NSNumber* sentDate;  /* sentDate  */
@property(nonatomic) NSString* status;  
@property(nonatomic) NSString* tid;  /* tid  */
@property(nonatomic) NSString* userId;  /* userId  */
- (id) acceptedDate: (NSNumber*) acceptedDate     
    email: (NSString*) email     
    expirationDate: (NSNumber*) expirationDate     
    _id: (NSString*) _id     
    invitationType: (NSString*) invitationType     
    revokedDate: (NSNumber*) revokedDate     
    sentDate: (NSNumber*) sentDate     
    status: (NSString*) status     
    tid: (NSString*) tid     
    userId: (NSString*) userId;
    

- (id) initWithValues: (NSDictionary*)dict;
- (NSDictionary*) asDictionary;

@end
