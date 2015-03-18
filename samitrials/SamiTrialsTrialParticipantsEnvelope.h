#import <Foundation/Foundation.h>
#import "SWGObject.h"
#import "SamiTrialsTrialParticipantArray.h"


@interface SamiTrialsTrialParticipantsEnvelope : SWGObject

@property(nonatomic) NSNumber* count;  
@property(nonatomic) SamiTrialsTrialParticipantArray* data;  
@property(nonatomic) NSNumber* offset;  
@property(nonatomic) NSNumber* total;  
- (id) count: (NSNumber*) count     
    data: (SamiTrialsTrialParticipantArray*) data     
    offset: (NSNumber*) offset     
    total: (NSNumber*) total;
    

- (id) initWithValues: (NSDictionary*)dict;
- (NSDictionary*) asDictionary;

@end
