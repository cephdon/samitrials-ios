#import <Foundation/Foundation.h>
#import "SWGObject.h"
#import "SamiTrialsTrialParticipant.h"


@interface SamiTrialsTrialParticipantArray : SWGObject

@property(nonatomic) NSArray* participants;  
- (id) participants: (NSArray*) participants;
    

- (id) initWithValues: (NSDictionary*)dict;
- (NSDictionary*) asDictionary;

@end
