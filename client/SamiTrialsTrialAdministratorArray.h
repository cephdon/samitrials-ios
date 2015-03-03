#import <Foundation/Foundation.h>
#import "SWGObject.h"
#import "SamiTrialsTrialParticipant.h"


@interface SamiTrialsTrialAdministratorArray : SWGObject

@property(nonatomic) NSArray* administrators;  
- (id) administrators: (NSArray*) administrators;
    

- (id) initWithValues: (NSDictionary*)dict;
- (NSDictionary*) asDictionary;

@end
