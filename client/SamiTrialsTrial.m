#import "SWGDate.h"
#import "SamiTrialsTrial.h"

@implementation SamiTrialsTrial

-(id)_description: (NSString*) _description
    endDate: (SWGDate*) endDate
    _id: (NSString*) _id
    name: (NSString*) name
    ownerId: (NSString*) ownerId
    startDate: (SWGDate*) startDate
    
{
    __description = _description;
    _endDate = endDate;
    __id = _id;
    _name = name;
    _ownerId = ownerId;
    _startDate = startDate;
    

    return self;
}

-(id) initWithValues:(NSDictionary*)dict
{
    self = [super init];
    if(self) {
        __description = dict[@"description"];
        
        
        
        id endDate_dict = dict[@"endDate"];
        
        if(endDate_dict != nil)
            _endDate = [[SWGDate  alloc]initWithValues:endDate_dict];
        
        
        __id = dict[@"id"];
        
        _name = dict[@"name"];
        
        _ownerId = dict[@"ownerId"];
        
        
        
        id startDate_dict = dict[@"startDate"];
        
        if(startDate_dict != nil)
            _startDate = [[SWGDate  alloc]initWithValues:startDate_dict];
        
        
        
    }
    return self;
}

-(NSDictionary*) asDictionary {
    NSMutableDictionary* dict = [[NSMutableDictionary alloc] init];
    
    
            if(__description != nil) dict[@"description"] = __description ;
        
    
    
    if(_endDate != nil){
        if([_endDate isKindOfClass:[NSArray class]]){
            NSMutableArray * array = [[NSMutableArray alloc] init];
            for( SWGDate *endDate in (NSArray*)_endDate) {
                [array addObject:[(SWGObject*)endDate asDictionary]];
            }
            dict[@"endDate"] = array;
        }
        else if(_endDate && [_endDate isKindOfClass:[SWGDate class]]) {
            NSString * dateString = [(SWGDate*)_endDate toString];
            if(dateString){
                dict[@"endDate"] = dateString;
            }
        }
        else {
        
            if(_endDate != nil) dict[@"endDate"] = [(SWGObject*)_endDate asDictionary];
        
        }
    }
    
    
    
            if(__id != nil) dict[@"id"] = __id ;
        
    
    
            if(_name != nil) dict[@"name"] = _name ;
        
    
    
            if(_ownerId != nil) dict[@"ownerId"] = _ownerId ;
        
    
    
    if(_startDate != nil){
        if([_startDate isKindOfClass:[NSArray class]]){
            NSMutableArray * array = [[NSMutableArray alloc] init];
            for( SWGDate *startDate in (NSArray*)_startDate) {
                [array addObject:[(SWGObject*)startDate asDictionary]];
            }
            dict[@"startDate"] = array;
        }
        else if(_startDate && [_startDate isKindOfClass:[SWGDate class]]) {
            NSString * dateString = [(SWGDate*)_startDate toString];
            if(dateString){
                dict[@"startDate"] = dateString;
            }
        }
        else {
        
            if(_startDate != nil) dict[@"startDate"] = [(SWGObject*)_startDate asDictionary];
        
        }
    }
    
    

    NSDictionary* output = [dict copy];
    return output;
}

@end
