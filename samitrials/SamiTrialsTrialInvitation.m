#import "SWGDate.h"
#import "SamiTrialsTrialInvitation.h"

@implementation SamiTrialsTrialInvitation

-(id)acceptedDate: (NSNumber*) acceptedDate
    email: (NSString*) email
    expirationDate: (NSNumber*) expirationDate
    _id: (NSString*) _id
    invitationType: (NSString*) invitationType
    revokedDate: (NSNumber*) revokedDate
    sentDate: (NSNumber*) sentDate
    status: (NSString*) status
    tid: (NSString*) tid
    userId: (NSString*) userId
    
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
    _userId = userId;
    

    return self;
}

-(id) initWithValues:(NSDictionary*)dict
{
    self = [super init];
    if(self) {
        _acceptedDate = dict[@"acceptedDate"];
        
        _email = dict[@"email"];
        
        _expirationDate = dict[@"expirationDate"];
        
        __id = dict[@"id"];
        
        _invitationType = dict[@"invitationType"];
        
        _revokedDate = dict[@"revokedDate"];
        
        _sentDate = dict[@"sentDate"];
        
        _status = dict[@"status"];
        
        _tid = dict[@"tid"];
        
        _userId = dict[@"userId"];
        
        
    }
    return self;
}

-(NSDictionary*) asDictionary {
    NSMutableDictionary* dict = [[NSMutableDictionary alloc] init];
    
    
            if(_acceptedDate != nil) dict[@"acceptedDate"] = _acceptedDate ;
        
    
    
            if(_email != nil) dict[@"email"] = _email ;
        
    
    
            if(_expirationDate != nil) dict[@"expirationDate"] = _expirationDate ;
        
    
    
            if(__id != nil) dict[@"id"] = __id ;
        
    
    
            if(_invitationType != nil) dict[@"invitationType"] = _invitationType ;
        
    
    
            if(_revokedDate != nil) dict[@"revokedDate"] = _revokedDate ;
        
    
    
            if(_sentDate != nil) dict[@"sentDate"] = _sentDate ;
        
    
    
            if(_status != nil) dict[@"status"] = _status ;
        
    
    
            if(_tid != nil) dict[@"tid"] = _tid ;
        
    
    
            if(_userId != nil) dict[@"userId"] = _userId ;
        
    

    NSDictionary* output = [dict copy];
    return output;
}

@end
