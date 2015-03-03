#import <Foundation/Foundation.h>
#import "SWGObject.h"
#import "SamiTrialsTrialAdministratorArray.h"


@interface SamiTrialsTrialAdministratorsEnvelope : SWGObject

@property(nonatomic) NSNumber* count;  
@property(nonatomic) SamiTrialsTrialAdministratorArray* data;  
@property(nonatomic) NSNumber* offset;  
@property(nonatomic) NSNumber* total;  
- (id) count: (NSNumber*) count     
    data: (SamiTrialsTrialAdministratorArray*) data     
    offset: (NSNumber*) offset     
    total: (NSNumber*) total;
    

- (id) initWithValues: (NSDictionary*)dict;
- (NSDictionary*) asDictionary;

@end
