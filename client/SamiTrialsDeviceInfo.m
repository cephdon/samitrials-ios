#import "SWGDate.h"
#import "SamiTrialsDeviceInfo.h"

@implementation SamiTrialsDeviceInfo

-(id)did: (NSString*) did
    
{
    _did = did;
    

    return self;
}

-(id) initWithValues:(NSDictionary*)dict
{
    self = [super init];
    if(self) {
        _did = dict[@"did"];
        
        
    }
    return self;
}

-(NSDictionary*) asDictionary {
    NSMutableDictionary* dict = [[NSMutableDictionary alloc] init];
    
    
            if(_did != nil) dict[@"did"] = _did ;
        
    

    NSDictionary* output = [dict copy];
    return output;
}

@end
