#import "SWGDate.h"
#import "SamiTrialsTrialUserDeviceRel.h"

@implementation SamiTrialsTrialUserDeviceRel

-(id)did: (NSString*) did
    tid: (NSString*) tid
    uid: (NSString*) uid
    
{
    _did = did;
    _tid = tid;
    _uid = uid;
    

    return self;
}

-(id) initWithValues:(NSDictionary*)dict
{
    self = [super init];
    if(self) {
        _did = dict[@"did"];
        
        _tid = dict[@"tid"];
        
        _uid = dict[@"uid"];
        
        
    }
    return self;
}

-(NSDictionary*) asDictionary {
    NSMutableDictionary* dict = [[NSMutableDictionary alloc] init];
    
    
            if(_did != nil) dict[@"did"] = _did ;
        
    
    
            if(_tid != nil) dict[@"tid"] = _tid ;
        
    
    
            if(_uid != nil) dict[@"uid"] = _uid ;
        
    

    NSDictionary* output = [dict copy];
    return output;
}

@end
