#import "SWGDate.h"
#import "SamiTrialsTrialDeviceTypeRel.h"

@implementation SamiTrialsTrialDeviceTypeRel

-(id)dtid: (NSString*) dtid
    tid: (NSString*) tid
    
{
    _dtid = dtid;
    _tid = tid;
    

    return self;
}

-(id) initWithValues:(NSDictionary*)dict
{
    self = [super init];
    if(self) {
        _dtid = dict[@"dtid"];
        
        _tid = dict[@"tid"];
        
        
    }
    return self;
}

-(NSDictionary*) asDictionary {
    NSMutableDictionary* dict = [[NSMutableDictionary alloc] init];
    
    
            if(_dtid != nil) dict[@"dtid"] = _dtid ;
        
    
    
            if(_tid != nil) dict[@"tid"] = _tid ;
        
    

    NSDictionary* output = [dict copy];
    return output;
}

@end
