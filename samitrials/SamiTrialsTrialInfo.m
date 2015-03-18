#import "SWGDate.h"
#import "SamiTrialsTrialInfo.h"

@implementation SamiTrialsTrialInfo

-(id)_description: (NSString*) _description
    name: (NSString*) name
    
{
    __description = _description;
    _name = name;
    

    return self;
}

-(id) initWithValues:(NSDictionary*)dict
{
    self = [super init];
    if(self) {
        __description = dict[@"description"];
        
        _name = dict[@"name"];
        
        
    }
    return self;
}

-(NSDictionary*) asDictionary {
    NSMutableDictionary* dict = [[NSMutableDictionary alloc] init];
    
    
            if(__description != nil) dict[@"description"] = __description ;
        
    
    
            if(_name != nil) dict[@"name"] = _name ;
        
    

    NSDictionary* output = [dict copy];
    return output;
}

@end
