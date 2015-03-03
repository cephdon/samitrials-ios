#import "SWGDate.h"
#import "SamiTrialsTrialAdministratorArray.h"

@implementation SamiTrialsTrialAdministratorArray

-(id)administrators: (NSArray*) administrators
    
{
    _administrators = administrators;
    

    return self;
}

-(id) initWithValues:(NSDictionary*)dict
{
    self = [super init];
    if(self) {
        
        
        id administrators_dict = dict[@"administrators"];
        
        if([administrators_dict isKindOfClass:[NSArray class]]) {
            NSMutableArray * objs = [[NSMutableArray alloc] initWithCapacity:[(NSArray*)administrators_dict count]];
            if([(NSArray*)administrators_dict count] > 0) {
                for (NSDictionary* dict in (NSArray*)administrators_dict) {
                    SamiTrialsTrialParticipant* d = [[SamiTrialsTrialParticipant alloc] initWithValues:dict];
                    [objs addObject:d];
                }
                _administrators = [[NSArray alloc] initWithArray:objs];
            }
            else
                _administrators = [[NSArray alloc] init];
        }
        else {
            _administrators = [[NSArray alloc] init];
        }
        
        
        
    }
    return self;
}

-(NSDictionary*) asDictionary {
    NSMutableDictionary* dict = [[NSMutableDictionary alloc] init];
    
    
    if(_administrators != nil){
        if([_administrators isKindOfClass:[NSArray class]]){
            NSMutableArray * array = [[NSMutableArray alloc] init];
            for( SamiTrialsTrialParticipant *administrators in (NSArray*)_administrators) {
                [array addObject:[(SWGObject*)administrators asDictionary]];
            }
            dict[@"administrators"] = array;
        }
        else if(_administrators && [_administrators isKindOfClass:[SWGDate class]]) {
            NSString * dateString = [(SWGDate*)_administrators toString];
            if(dateString){
                dict[@"administrators"] = dateString;
            }
        }
        else {
        
            if(_administrators != nil) dict[@"administrators"] = [(SWGObject*)_administrators asDictionary];
        
        }
    }
    
    

    NSDictionary* output = [dict copy];
    return output;
}

@end
