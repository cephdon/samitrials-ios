#import "SWGDate.h"
#import "SamiTrialsTrialInvitation.h"

@implementation SamiTrialsTrialInvitation

-(id)acceptedDate: (SWGDate*) acceptedDate
    email: (NSString*) email
    expirationDate: (SWGDate*) expirationDate
    _id: (NSString*) _id
    invitationType: (SamiTrialsTrialGroupType*) invitationType
    revokedDate: (SWGDate*) revokedDate
    sentDate: (SWGDate*) sentDate
    status: (SamiTrialsTrialInvitationStatus*) status
    tid: (NSString*) tid
    
{
    _acceptedDate = acceptedDate;
    _email = email;
    _expirationDate = expirationDate;
    __id = _id;
    _invitationType = invitationType;
    _revokedDate = revokedDate;
    _sentDate = sentDate;
    _status = status;
    _tid = tid;
    

    return self;
}

-(id) initWithValues:(NSDictionary*)dict
{
    self = [super init];
    if(self) {
        
        
        id acceptedDate_dict = dict[@"acceptedDate"];
        
        if(acceptedDate_dict != nil)
            _acceptedDate = [[SWGDate  alloc]initWithValues:acceptedDate_dict];
        
        
        _email = dict[@"email"];
        
        
        
        id expirationDate_dict = dict[@"expirationDate"];
        
        if(expirationDate_dict != nil)
            _expirationDate = [[SWGDate  alloc]initWithValues:expirationDate_dict];
        
        
        __id = dict[@"id"];
        
        
        
        id invitationType_dict = dict[@"invitationType"];
        
        if(invitationType_dict != nil)
            _invitationType = [[SamiTrialsTrialGroupType  alloc]initWithValues:invitationType_dict];
        
        
        
        
        id revokedDate_dict = dict[@"revokedDate"];
        
        if(revokedDate_dict != nil)
            _revokedDate = [[SWGDate  alloc]initWithValues:revokedDate_dict];
        
        
        
        
        id sentDate_dict = dict[@"sentDate"];
        
        if(sentDate_dict != nil)
            _sentDate = [[SWGDate  alloc]initWithValues:sentDate_dict];
        
        
        
        
        id status_dict = dict[@"status"];
        
        if(status_dict != nil)
            _status = [[SamiTrialsTrialInvitationStatus  alloc]initWithValues:status_dict];
        
        
        _tid = dict[@"tid"];
        
        
    }
    return self;
}

-(NSDictionary*) asDictionary {
    NSMutableDictionary* dict = [[NSMutableDictionary alloc] init];
    
    
    if(_acceptedDate != nil){
        if([_acceptedDate isKindOfClass:[NSArray class]]){
            NSMutableArray * array = [[NSMutableArray alloc] init];
            for( SWGDate *acceptedDate in (NSArray*)_acceptedDate) {
                [array addObject:[(SWGObject*)acceptedDate asDictionary]];
            }
            dict[@"acceptedDate"] = array;
        }
        else if(_acceptedDate && [_acceptedDate isKindOfClass:[SWGDate class]]) {
            NSString * dateString = [(SWGDate*)_acceptedDate toString];
            if(dateString){
                dict[@"acceptedDate"] = dateString;
            }
        }
        else {
        
            if(_acceptedDate != nil) dict[@"acceptedDate"] = [(SWGObject*)_acceptedDate asDictionary];
        
        }
    }
    
    
    
            if(_email != nil) dict[@"email"] = _email ;
        
    
    
    if(_expirationDate != nil){
        if([_expirationDate isKindOfClass:[NSArray class]]){
            NSMutableArray * array = [[NSMutableArray alloc] init];
            for( SWGDate *expirationDate in (NSArray*)_expirationDate) {
                [array addObject:[(SWGObject*)expirationDate asDictionary]];
            }
            dict[@"expirationDate"] = array;
        }
        else if(_expirationDate && [_expirationDate isKindOfClass:[SWGDate class]]) {
            NSString * dateString = [(SWGDate*)_expirationDate toString];
            if(dateString){
                dict[@"expirationDate"] = dateString;
            }
        }
        else {
        
            if(_expirationDate != nil) dict[@"expirationDate"] = [(SWGObject*)_expirationDate asDictionary];
        
        }
    }
    
    
    
            if(__id != nil) dict[@"id"] = __id ;
        
    
    
    if(_invitationType != nil){
        if([_invitationType isKindOfClass:[NSArray class]]){
            NSMutableArray * array = [[NSMutableArray alloc] init];
            for( SamiTrialsTrialGroupType *invitationType in (NSArray*)_invitationType) {
                [array addObject:[(SWGObject*)invitationType asDictionary]];
            }
            dict[@"invitationType"] = array;
        }
        else if(_invitationType && [_invitationType isKindOfClass:[SWGDate class]]) {
            NSString * dateString = [(SWGDate*)_invitationType toString];
            if(dateString){
                dict[@"invitationType"] = dateString;
            }
        }
        else {
        
            if(_invitationType != nil) dict[@"invitationType"] = [(SWGObject*)_invitationType asDictionary];
        
        }
    }
    
    
    
    if(_revokedDate != nil){
        if([_revokedDate isKindOfClass:[NSArray class]]){
            NSMutableArray * array = [[NSMutableArray alloc] init];
            for( SWGDate *revokedDate in (NSArray*)_revokedDate) {
                [array addObject:[(SWGObject*)revokedDate asDictionary]];
            }
            dict[@"revokedDate"] = array;
        }
        else if(_revokedDate && [_revokedDate isKindOfClass:[SWGDate class]]) {
            NSString * dateString = [(SWGDate*)_revokedDate toString];
            if(dateString){
                dict[@"revokedDate"] = dateString;
            }
        }
        else {
        
            if(_revokedDate != nil) dict[@"revokedDate"] = [(SWGObject*)_revokedDate asDictionary];
        
        }
    }
    
    
    
    if(_sentDate != nil){
        if([_sentDate isKindOfClass:[NSArray class]]){
            NSMutableArray * array = [[NSMutableArray alloc] init];
            for( SWGDate *sentDate in (NSArray*)_sentDate) {
                [array addObject:[(SWGObject*)sentDate asDictionary]];
            }
            dict[@"sentDate"] = array;
        }
        else if(_sentDate && [_sentDate isKindOfClass:[SWGDate class]]) {
            NSString * dateString = [(SWGDate*)_sentDate toString];
            if(dateString){
                dict[@"sentDate"] = dateString;
            }
        }
        else {
        
            if(_sentDate != nil) dict[@"sentDate"] = [(SWGObject*)_sentDate asDictionary];
        
        }
    }
    
    
    
    if(_status != nil){
        if([_status isKindOfClass:[NSArray class]]){
            NSMutableArray * array = [[NSMutableArray alloc] init];
            for( SamiTrialsTrialInvitationStatus *status in (NSArray*)_status) {
                [array addObject:[(SWGObject*)status asDictionary]];
            }
            dict[@"status"] = array;
        }
        else if(_status && [_status isKindOfClass:[SWGDate class]]) {
            NSString * dateString = [(SWGDate*)_status toString];
            if(dateString){
                dict[@"status"] = dateString;
            }
        }
        else {
        
            if(_status != nil) dict[@"status"] = [(SWGObject*)_status asDictionary];
        
        }
    }
    
    
    
            if(_tid != nil) dict[@"tid"] = _tid ;
        
    

    NSDictionary* output = [dict copy];
    return output;
}

@end
