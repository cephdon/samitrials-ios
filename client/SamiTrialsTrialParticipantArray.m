#import "SWGDate.h"
#import "SamiTrialsTrialParticipantArray.h"

@implementation SamiTrialsTrialParticipantArray

-(id)participants: (NSArray*) participants
    
{
    _participants = participants;
    

    return self;
}

-(id) initWithValues:(NSDictionary*)dict
{
    self = [super init];
    if(self) {
        
        
        id participants_dict = dict[@"participants"];
        
        if([participants_dict isKindOfClass:[NSArray class]]) {
            NSMutableArray * objs = [[NSMutableArray alloc] initWithCapacity:[(NSArray*)participants_dict count]];
            if([(NSArray*)participants_dict count] > 0) {
                for (NSDictionary* dict in (NSArray*)participants_dict) {
                    SamiTrialsTrialParticipant* d = [[SamiTrialsTrialParticipant alloc] initWithValues:dict];
                    [objs addObject:d];
                }
                _participants = [[NSArray alloc] initWithArray:objs];
            }
            else
                _participants = [[NSArray alloc] init];
        }
        else {
            _participants = [[NSArray alloc] init];
        }
        
        
        
    }
    return self;
}

-(NSDictionary*) asDictionary {
    NSMutableDictionary* dict = [[NSMutableDictionary alloc] init];
    
    
    if(_participants != nil){
        if([_participants isKindOfClass:[NSArray class]]){
            NSMutableArray * array = [[NSMutableArray alloc] init];
            for( SamiTrialsTrialParticipant *participants in (NSArray*)_participants) {
                [array addObject:[(SWGObject*)participants asDictionary]];
            }
            dict[@"participants"] = array;
        }
        else if(_participants && [_participants isKindOfClass:[SWGDate class]]) {
            NSString * dateString = [(SWGDate*)_participants toString];
            if(dateString){
                dict[@"participants"] = dateString;
            }
        }
        else {
        
            if(_participants != nil) dict[@"participants"] = [(SWGObject*)_participants asDictionary];
        
        }
    }
    
    

    NSDictionary* output = [dict copy];
    return output;
}

@end
