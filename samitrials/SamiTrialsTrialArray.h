#import <Foundation/Foundation.h>
#import "SWGObject.h"
#import "SamiTrialsTrial.h"


@interface SamiTrialsTrialArray : SWGObject

@property(nonatomic) NSArray* deviceTypes;  
- (id) deviceTypes: (NSArray*) deviceTypes;
    

- (id) initWithValues: (NSDictionary*)dict;
- (NSDictionary*) asDictionary;

@end
