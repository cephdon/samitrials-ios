#import "SWGDate.h"
#import "SamiTrialsTrialParticipant.h"

@implementation SamiTrialsTrialParticipant

-(id)email: (NSString*) email
    fullName: (NSString*) fullName
    _id: (NSString*) _id
    
{
    _email = email;
    _fullName = fullName;
    __id = _id;
    

    return self;
}

-(id) initWithValues:(NSDictionary*)dict
{
    self = [super init];
    if(self) {
        _email = dict[@"email"];
        
        _fullName = dict[@"fullName"];
        
        __id = dict[@"id"];
        
        
    }
    return self;
}

-(NSDictionary*) asDictionary {
    NSMutableDictionary* dict = [[NSMutableDictionary alloc] init];
    
    
            if(_email != nil) dict[@"email"] = _email ;
        
    
    
            if(_fullName != nil) dict[@"fullName"] = _fullName ;
        
    
    
            if(__id != nil) dict[@"id"] = __id ;
        
    

    NSDictionary* output = [dict copy];
    return output;
}

@end
