#import "SWGDate.h"
#import "SamiTrialsConnectedDeviceArray.h"

@implementation SamiTrialsConnectedDeviceArray

-(id)devices: (NSArray*) devices
    
{
    _devices = devices;
    

    return self;
}

-(id) initWithValues:(NSDictionary*)dict
{
    self = [super init];
    if(self) {
        
        
        id devices_dict = dict[@"devices"];
        
        if([devices_dict isKindOfClass:[NSArray class]]) {
            NSMutableArray * objs = [[NSMutableArray alloc] initWithCapacity:[(NSArray*)devices_dict count]];
            if([(NSArray*)devices_dict count] > 0) {
                for (NSDictionary* dict in (NSArray*)devices_dict) {
                    SamiTrialsConnectedDevice* d = [[SamiTrialsConnectedDevice alloc] initWithValues:dict];
                    [objs addObject:d];
                }
                _devices = [[NSArray alloc] initWithArray:objs];
            }
            else
                _devices = [[NSArray alloc] init];
        }
        else {
            _devices = [[NSArray alloc] init];
        }
        
        
        
    }
    return self;
}

-(NSDictionary*) asDictionary {
    NSMutableDictionary* dict = [[NSMutableDictionary alloc] init];
    
    
    if(_devices != nil){
        if([_devices isKindOfClass:[NSArray class]]){
            NSMutableArray * array = [[NSMutableArray alloc] init];
            for( SamiTrialsConnectedDevice *devices in (NSArray*)_devices) {
                [array addObject:[(SWGObject*)devices asDictionary]];
            }
            dict[@"devices"] = array;
        }
        else if(_devices && [_devices isKindOfClass:[SWGDate class]]) {
            NSString * dateString = [(SWGDate*)_devices toString];
            if(dateString){
                dict[@"devices"] = dateString;
            }
        }
        else {
        
            if(_devices != nil) dict[@"devices"] = [(SWGObject*)_devices asDictionary];
        
        }
    }
    
    

    NSDictionary* output = [dict copy];
    return output;
}

@end
