#import "SWGDate.h"
#import "SamiTrialsDeviceTypeInfo.h"

@implementation SamiTrialsDeviceTypeInfo

-(id)dtid: (NSString*) dtid
    
{
    _dtid = dtid;
    

    return self;
}

-(id) initWithValues:(NSDictionary*)dict
{
    self = [super init];
    if(self) {
        _dtid = dict[@"dtid"];
        
        
    }
    return self;
}

-(NSDictionary*) asDictionary {
    NSMutableDictionary* dict = [[NSMutableDictionary alloc] init];
    
    
            if(_dtid != nil) dict[@"dtid"] = _dtid ;
        
    

    NSDictionary* output = [dict copy];
    return output;
}

@end
