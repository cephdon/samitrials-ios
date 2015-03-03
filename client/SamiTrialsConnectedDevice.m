#import "SWGDate.h"
#import "SamiTrialsConnectedDevice.h"

@implementation SamiTrialsConnectedDevice

-(id)connected_on: (NSNumber*) connected_on
    dtid: (NSString*) dtid
    _id: (NSString*) _id
    manifestVersion: (NSNumber*) manifestVersion
    manifestVersionPolicy: (NSString*) manifestVersionPolicy
    name: (NSString*) name
    uid: (NSString*) uid
    
{
    _connected_on = connected_on;
    _dtid = dtid;
    __id = _id;
    _manifestVersion = manifestVersion;
    _manifestVersionPolicy = manifestVersionPolicy;
    _name = name;
    _uid = uid;
    

    return self;
}

-(id) initWithValues:(NSDictionary*)dict
{
    self = [super init];
    if(self) {
        _connected_on = dict[@"connected_on"];
        
        _dtid = dict[@"dtid"];
        
        __id = dict[@"id"];
        
        _manifestVersion = dict[@"manifestVersion"];
        
        _manifestVersionPolicy = dict[@"manifestVersionPolicy"];
        
        _name = dict[@"name"];
        
        _uid = dict[@"uid"];
        
        
    }
    return self;
}

-(NSDictionary*) asDictionary {
    NSMutableDictionary* dict = [[NSMutableDictionary alloc] init];
    
    
            if(_connected_on != nil) dict[@"connected_on"] = _connected_on ;
        
    
    
            if(_dtid != nil) dict[@"dtid"] = _dtid ;
        
    
    
            if(__id != nil) dict[@"id"] = __id ;
        
    
    
            if(_manifestVersion != nil) dict[@"manifestVersion"] = _manifestVersion ;
        
    
    
            if(_manifestVersionPolicy != nil) dict[@"manifestVersionPolicy"] = _manifestVersionPolicy ;
        
    
    
            if(_name != nil) dict[@"name"] = _name ;
        
    
    
            if(_uid != nil) dict[@"uid"] = _uid ;
        
    

    NSDictionary* output = [dict copy];
    return output;
}

@end
