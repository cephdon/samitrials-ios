#import "SWGDate.h"
#import "SamiTrialsTrialUpdateInfo.h"

@implementation SamiTrialsTrialUpdateInfo

-(id)_description: (NSString*) _description
    name: (NSString*) name
    status: (NSString*) status
    
{
    __description = _description;
    _name = name;
    _status = status;
    

    return self;
}

-(id) initWithValues:(NSDictionary*)dict
{
    self = [super init];
    if(self) {
        __description = dict[@"description"];
        
        _name = dict[@"name"];
        
        _status = dict[@"status"];
        
        
    }
    return self;
}

-(NSDictionary*) asDictionary {
    NSMutableDictionary* dict = [[NSMutableDictionary alloc] init];
    
    
            if(__description != nil) dict[@"description"] = __description ;
        
    
    
            if(_name != nil) dict[@"name"] = _name ;
        
    
    
            if(_status != nil) dict[@"status"] = _status ;
        
    

    NSDictionary* output = [dict copy];
    return output;
}

@end
