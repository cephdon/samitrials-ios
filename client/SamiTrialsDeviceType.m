#import "SWGDate.h"
#import "SamiTrialsDeviceType.h"

@implementation SamiTrialsDeviceType

-(id)_id: (NSString*) _id
    approved: (NSNumber*) approved
    _id: (NSString*) _id
    latestVersion: (NSNumber*) latestVersion
    manifest: (NSString*) manifest
    manifestSource: (NSString*) manifestSource
    manifestSourceType: (SamiTrialsManifestSourceTypes*) manifestSourceType
    name: (NSString*) name
    published: (NSNumber*) published
    requireSecureProtocol: (SamiTrialsObject*) requireSecureProtocol
    suerDn: (NSString*) suerDn
    uniqueName: (NSString*) uniqueName
    userId: (NSString*) userId
    vendorId: (NSString*) vendorId
    
{
    __id = _id;
    _approved = approved;
    __id = _id;
    _latestVersion = latestVersion;
    _manifest = manifest;
    _manifestSource = manifestSource;
    _manifestSourceType = manifestSourceType;
    _name = name;
    _published = published;
    _requireSecureProtocol = requireSecureProtocol;
    _suerDn = suerDn;
    _uniqueName = uniqueName;
    _userId = userId;
    _vendorId = vendorId;
    

    return self;
}

-(id) initWithValues:(NSDictionary*)dict
{
    self = [super init];
    if(self) {
        __id = dict[@"_id"];
        
        _approved = dict[@"approved"];
        
        __id = dict[@"id"];
        
        _latestVersion = dict[@"latestVersion"];
        
        _manifest = dict[@"manifest"];
        
        _manifestSource = dict[@"manifestSource"];
        
        
        
        id manifestSourceType_dict = dict[@"manifestSourceType"];
        
        if(manifestSourceType_dict != nil)
            _manifestSourceType = [[SamiTrialsManifestSourceTypes  alloc]initWithValues:manifestSourceType_dict];
        
        
        _name = dict[@"name"];
        
        _published = dict[@"published"];
        
        
        
        id requireSecureProtocol_dict = dict[@"requireSecureProtocol"];
        
        if(requireSecureProtocol_dict != nil)
            _requireSecureProtocol = [[SamiTrialsObject  alloc]initWithValues:requireSecureProtocol_dict];
        
        
        _suerDn = dict[@"suerDn"];
        
        _uniqueName = dict[@"uniqueName"];
        
        _userId = dict[@"userId"];
        
        _vendorId = dict[@"vendorId"];
        
        
    }
    return self;
}

-(NSDictionary*) asDictionary {
    NSMutableDictionary* dict = [[NSMutableDictionary alloc] init];
    
    
            if(__id != nil) dict[@"_id"] = __id ;
        
    
    
            if(_approved != nil) dict[@"approved"] = _approved ;
        
    
    
            if(__id != nil) dict[@"id"] = __id ;
        
    
    
            if(_latestVersion != nil) dict[@"latestVersion"] = _latestVersion ;
        
    
    
            if(_manifest != nil) dict[@"manifest"] = _manifest ;
        
    
    
            if(_manifestSource != nil) dict[@"manifestSource"] = _manifestSource ;
        
    
    
    if(_manifestSourceType != nil){
        if([_manifestSourceType isKindOfClass:[NSArray class]]){
            NSMutableArray * array = [[NSMutableArray alloc] init];
            for( SamiTrialsManifestSourceTypes *manifestSourceType in (NSArray*)_manifestSourceType) {
                [array addObject:[(SWGObject*)manifestSourceType asDictionary]];
            }
            dict[@"manifestSourceType"] = array;
        }
        else if(_manifestSourceType && [_manifestSourceType isKindOfClass:[SWGDate class]]) {
            NSString * dateString = [(SWGDate*)_manifestSourceType toString];
            if(dateString){
                dict[@"manifestSourceType"] = dateString;
            }
        }
        else {
        
            if(_manifestSourceType != nil) dict[@"manifestSourceType"] = [(SWGObject*)_manifestSourceType asDictionary];
        
        }
    }
    
    
    
            if(_name != nil) dict[@"name"] = _name ;
        
    
    
            if(_published != nil) dict[@"published"] = _published ;
        
    
    
    if(_requireSecureProtocol != nil){
        if([_requireSecureProtocol isKindOfClass:[NSArray class]]){
            NSMutableArray * array = [[NSMutableArray alloc] init];
            for( SamiTrialsObject *requireSecureProtocol in (NSArray*)_requireSecureProtocol) {
                [array addObject:[(SWGObject*)requireSecureProtocol asDictionary]];
            }
            dict[@"requireSecureProtocol"] = array;
        }
        else if(_requireSecureProtocol && [_requireSecureProtocol isKindOfClass:[SWGDate class]]) {
            NSString * dateString = [(SWGDate*)_requireSecureProtocol toString];
            if(dateString){
                dict[@"requireSecureProtocol"] = dateString;
            }
        }
        else {
        
            if(_requireSecureProtocol != nil) dict[@"requireSecureProtocol"] = [(SWGObject*)_requireSecureProtocol asDictionary];
        
        }
    }
    
    
    
            if(_suerDn != nil) dict[@"suerDn"] = _suerDn ;
        
    
    
            if(_uniqueName != nil) dict[@"uniqueName"] = _uniqueName ;
        
    
    
            if(_userId != nil) dict[@"userId"] = _userId ;
        
    
    
            if(_vendorId != nil) dict[@"vendorId"] = _vendorId ;
        
    

    NSDictionary* output = [dict copy];
    return output;
}

@end
