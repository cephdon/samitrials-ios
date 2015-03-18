#import "SWGDate.h"
#import "SamiTrialsTrialInvitationArray.h"

@implementation SamiTrialsTrialInvitationArray

-(id)invitations: (NSArray*) invitations
    
{
    _invitations = invitations;
    

    return self;
}

-(id) initWithValues:(NSDictionary*)dict
{
    self = [super init];
    if(self) {
        
        
        id invitations_dict = dict[@"invitations"];
        
        if([invitations_dict isKindOfClass:[NSArray class]]) {
            NSMutableArray * objs = [[NSMutableArray alloc] initWithCapacity:[(NSArray*)invitations_dict count]];
            if([(NSArray*)invitations_dict count] > 0) {
                for (NSDictionary* dict in (NSArray*)invitations_dict) {
                    SamiTrialsTrialInvitation* d = [[SamiTrialsTrialInvitation alloc] initWithValues:dict];
                    [objs addObject:d];
                }
                _invitations = [[NSArray alloc] initWithArray:objs];
            }
            else
                _invitations = [[NSArray alloc] init];
        }
        else {
            _invitations = [[NSArray alloc] init];
        }
        
        
        
    }
    return self;
}

-(NSDictionary*) asDictionary {
    NSMutableDictionary* dict = [[NSMutableDictionary alloc] init];
    
    
    if(_invitations != nil){
        if([_invitations isKindOfClass:[NSArray class]]){
            NSMutableArray * array = [[NSMutableArray alloc] init];
            for( SamiTrialsTrialInvitation *invitations in (NSArray*)_invitations) {
                [array addObject:[(SWGObject*)invitations asDictionary]];
            }
            dict[@"invitations"] = array;
        }
        else if(_invitations && [_invitations isKindOfClass:[SWGDate class]]) {
            NSString * dateString = [(SWGDate*)_invitations toString];
            if(dateString){
                dict[@"invitations"] = dateString;
            }
        }
        else {
        
            if(_invitations != nil) dict[@"invitations"] = [(SWGObject*)_invitations asDictionary];
        
        }
    }
    
    

    NSDictionary* output = [dict copy];
    return output;
}

@end
