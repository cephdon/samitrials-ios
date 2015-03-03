#import "SWGDate.h"
#import "SamiTrialsTrialInfo.h"

@implementation SamiTrialsTrialInfo

-(id)_description: (NSString*) _description
    endDate: (NSNumber*) endDate
    name: (NSString*) name
    startDate: (NSNumber*) startDate
    
{
    __description = _description;
    _endDate = endDate;
    _name = name;
    _startDate = startDate;
    

    return self;
}

-(id) initWithValues:(NSDictionary*)dict
{
    self = [super init];
    if(self) {
        __description = dict[@"description"];
        
        _endDate = dict[@"endDate"];
        
        _name = dict[@"name"];
        
        _startDate = dict[@"startDate"];
        
        
    }
    return self;
}

-(NSDictionary*) asDictionary {
    NSMutableDictionary* dict = [[NSMutableDictionary alloc] init];
    
    
            if(__description != nil) dict[@"description"] = __description ;
        
    
    
            if(_endDate != nil) dict[@"endDate"] = _endDate ;
        
    
    
            if(_name != nil) dict[@"name"] = _name ;
        
    
    
            if(_startDate != nil) dict[@"startDate"] = _startDate ;
        
    

    NSDictionary* output = [dict copy];
    return output;
}

@end
