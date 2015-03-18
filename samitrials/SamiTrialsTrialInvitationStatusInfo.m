#import "SWGDate.h"
#import "SamiTrialsTrialInvitationStatusInfo.h"

@implementation SamiTrialsTrialInvitationStatusInfo

-(id)status: (NSString*) status
    
{
    _status = status;
    

    return self;
}

-(id) initWithValues:(NSDictionary*)dict
{
    self = [super init];
    if(self) {
        _status = dict[@"status"];
        
        
    }
    return self;
}

-(NSDictionary*) asDictionary {
    NSMutableDictionary* dict = [[NSMutableDictionary alloc] init];
    
    
            if(_status != nil) dict[@"status"] = _status ;
        
    

    NSDictionary* output = [dict copy];
    return output;
}

@end
