#import "SWGDate.h"
#import "SamiTrialsTrialInvitationInfo.h"

@implementation SamiTrialsTrialInvitationInfo

-(id)email: (NSString*) email
    invitationType: (NSString*) invitationType
    
{
    _email = email;
    _invitationType = invitationType;
    

    return self;
}

-(id) initWithValues:(NSDictionary*)dict
{
    self = [super init];
    if(self) {
        _email = dict[@"email"];
        
        _invitationType = dict[@"invitationType"];
        
        
    }
    return self;
}

-(NSDictionary*) asDictionary {
    NSMutableDictionary* dict = [[NSMutableDictionary alloc] init];
    
    
            if(_email != nil) dict[@"email"] = _email ;
        
    
    
            if(_invitationType != nil) dict[@"invitationType"] = _invitationType ;
        
    

    NSDictionary* output = [dict copy];
    return output;
}

@end
