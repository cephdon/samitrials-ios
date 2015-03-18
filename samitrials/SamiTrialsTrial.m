#import "SWGDate.h"
#import "SamiTrialsTrial.h"

@implementation SamiTrialsTrial

-(id)aid: (NSString*) aid
    clientSecret: (NSString*) clientSecret
    _description: (NSString*) _description
    endDate: (NSNumber*) endDate
    _id: (NSString*) _id
    name: (NSString*) name
    ownerId: (NSString*) ownerId
    startDate: (NSNumber*) startDate
    
{
    _aid = aid;
    _clientSecret = clientSecret;
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
        _aid = dict[@"aid"];
        
        _clientSecret = dict[@"clientSecret"];
        
        __description = dict[@"description"];
        
        _endDate = dict[@"endDate"];
        
        __id = dict[@"id"];
        
        _name = dict[@"name"];
        
        _ownerId = dict[@"ownerId"];
        
        _startDate = dict[@"startDate"];
        
        
    }
    return self;
}

-(NSDictionary*) asDictionary {
    NSMutableDictionary* dict = [[NSMutableDictionary alloc] init];
    
    
            if(_aid != nil) dict[@"aid"] = _aid ;
        
    
    
            if(_clientSecret != nil) dict[@"clientSecret"] = _clientSecret ;
        
    
    
            if(__description != nil) dict[@"description"] = __description ;
        
    
    
            if(_endDate != nil) dict[@"endDate"] = _endDate ;
        
    
    
            if(__id != nil) dict[@"id"] = __id ;
        
    
    
            if(_name != nil) dict[@"name"] = _name ;
        
    
    
            if(_ownerId != nil) dict[@"ownerId"] = _ownerId ;
        
    
    
            if(_startDate != nil) dict[@"startDate"] = _startDate ;
        
    

    NSDictionary* output = [dict copy];
    return output;
}

@end
