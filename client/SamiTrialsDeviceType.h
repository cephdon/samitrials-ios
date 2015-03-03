#import <Foundation/Foundation.h>
#import "SWGObject.h"
#import "SamiTrialsObject.h"
#import "SamiTrialsManifestSourceTypes.h"


@interface SamiTrialsDeviceType : SWGObject

@property(nonatomic) NSString* _id;  /* id  */
@property(nonatomic) NSNumber* approved;  
@property(nonatomic) NSString* _id;  
@property(nonatomic) NSNumber* latestVersion;  
@property(nonatomic) NSString* manifest;  
@property(nonatomic) NSString* manifestSource;  
@property(nonatomic) SamiTrialsManifestSourceTypes* manifestSourceType;  
@property(nonatomic) NSString* name;  
@property(nonatomic) NSNumber* published;  
@property(nonatomic) SamiTrialsObject* requireSecureProtocol;  
@property(nonatomic) NSString* suerDn;  
@property(nonatomic) NSString* uniqueName;  
@property(nonatomic) NSString* userId;  
@property(nonatomic) NSString* vendorId;  
- (id) _id: (NSString*) _id     
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
    vendorId: (NSString*) vendorId;
    

- (id) initWithValues: (NSDictionary*)dict;
- (NSDictionary*) asDictionary;

@end
