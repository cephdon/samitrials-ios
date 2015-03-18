#import <Foundation/Foundation.h>
#import "SWGObject.h"


@interface SamiTrialsTrialParticipantRel : SWGObject

@property(nonatomic) NSString* tid;  
@property(nonatomic) NSString* uid;  
- (id) tid: (NSString*) tid     
    uid: (NSString*) uid;
    

- (id) initWithValues: (NSDictionary*)dict;
- (NSDictionary*) asDictionary;

@end
