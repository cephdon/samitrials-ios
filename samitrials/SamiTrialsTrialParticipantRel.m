#import "SWGDate.h"
#import "SamiTrialsTrialParticipantRel.h"

@implementation SamiTrialsTrialParticipantRel

-(id)tid: (NSString*) tid
    uid: (NSString*) uid
    
{
    _tid = tid;
    _uid = uid;
    

    return self;
}

-(id) initWithValues:(NSDictionary*)dict
{
    self = [super init];
    if(self) {
        _tid = dict[@"tid"];
        
        _uid = dict[@"uid"];
        
        
    }
    return self;
}

-(NSDictionary*) asDictionary {
    NSMutableDictionary* dict = [[NSMutableDictionary alloc] init];
    
    
            if(_tid != nil) dict[@"tid"] = _tid ;
        
    
    
            if(_uid != nil) dict[@"uid"] = _uid ;
        
    

    NSDictionary* output = [dict copy];
    return output;
}

@end
