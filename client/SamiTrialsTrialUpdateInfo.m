#import "SWGDate.h"
#import "SamiTrialsTrialUpdateInfo.h"

@implementation SamiTrialsTrialUpdateInfo

-(id)_description: (NSString*) _description
    name: (NSString*) name
    status: (SamiTrialsTrialStatus*) status
    
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
        
        
        
        id status_dict = dict[@"status"];
        
        if(status_dict != nil)
            _status = [[SamiTrialsTrialStatus  alloc]initWithValues:status_dict];
        
        
        
    }
    return self;
}

-(NSDictionary*) asDictionary {
    NSMutableDictionary* dict = [[NSMutableDictionary alloc] init];
    
    
            if(__description != nil) dict[@"description"] = __description ;
        
    
    
            if(_name != nil) dict[@"name"] = _name ;
        
    
    
    if(_status != nil){
        if([_status isKindOfClass:[NSArray class]]){
            NSMutableArray * array = [[NSMutableArray alloc] init];
            for( SamiTrialsTrialStatus *status in (NSArray*)_status) {
                [array addObject:[(SWGObject*)status asDictionary]];
            }
            dict[@"status"] = array;
        }
        else if(_status && [_status isKindOfClass:[SWGDate class]]) {
            NSString * dateString = [(SWGDate*)_status toString];
            if(dateString){
                dict[@"status"] = dateString;
            }
        }
        else {
        
            if(_status != nil) dict[@"status"] = [(SWGObject*)_status asDictionary];
        
        }
    }
    
    

    NSDictionary* output = [dict copy];
    return output;
}

@end
