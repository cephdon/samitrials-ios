#import "SWGDate.h"
#import "SamiTrialsTrialUpdateInfo.h"

@implementation SamiTrialsTrialUpdateInfo

-(id)_description: (NSString*) _description
    endDate: (NSNumber*) endDate
    name: (NSString*) name
    startDate: (NSNumber*) startDate
    status: (SamiTrialsTrialStatus*) status
    
{
    __description = _description;
    _endDate = endDate;
    _name = name;
    _startDate = startDate;
    _status = status;
    

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
        
        
        
        id status_dict = dict[@"status"];
        
        if(status_dict != nil)
            _status = [[SamiTrialsTrialStatus  alloc]initWithValues:status_dict];
        
        
        
    }
    return self;
}

-(NSDictionary*) asDictionary {
    NSMutableDictionary* dict = [[NSMutableDictionary alloc] init];
    
    
            if(__description != nil) dict[@"description"] = __description ;
        
    
    
            if(_endDate != nil) dict[@"endDate"] = _endDate ;
        
    
    
            if(_name != nil) dict[@"name"] = _name ;
        
    
    
            if(_startDate != nil) dict[@"startDate"] = _startDate ;
        
    
    
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
