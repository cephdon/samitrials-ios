#import <Foundation/Foundation.h>
#import "SWGObject.h"
#import "SamiTrialsTrialInvitationArray.h"


@interface SamiTrialsTrialInvitationsEnvelope : SWGObject

@property(nonatomic) NSNumber* count;  
@property(nonatomic) SamiTrialsTrialInvitationArray* data;  
@property(nonatomic) NSNumber* offset;  
@property(nonatomic) NSNumber* total;  
- (id) count: (NSNumber*) count     
    data: (SamiTrialsTrialInvitationArray*) data     
    offset: (NSNumber*) offset     
    total: (NSNumber*) total;
    

- (id) initWithValues: (NSDictionary*)dict;
- (NSDictionary*) asDictionary;

@end
