#import <Foundation/Foundation.h>
#import "SWGObject.h"


@interface SamiTrialsTrialParticipant : SWGObject

@property(nonatomic) NSString* email;  
@property(nonatomic) NSString* fullName;  
@property(nonatomic) NSString* _id;  
- (id) email: (NSString*) email     
    fullName: (NSString*) fullName     
    _id: (NSString*) _id;
    

- (id) initWithValues: (NSDictionary*)dict;
- (NSDictionary*) asDictionary;

@end
