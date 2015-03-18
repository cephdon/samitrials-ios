#import <Foundation/Foundation.h>
#import "SWGObject.h"


@interface SamiTrialsTrialUserDeviceRel : SWGObject

@property(nonatomic) NSString* did;  
@property(nonatomic) NSString* tid;  
@property(nonatomic) NSString* uid;  
- (id) did: (NSString*) did     
    tid: (NSString*) tid     
    uid: (NSString*) uid;
    

- (id) initWithValues: (NSDictionary*)dict;
- (NSDictionary*) asDictionary;

@end
