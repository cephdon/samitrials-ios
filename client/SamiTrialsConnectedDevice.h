#import <Foundation/Foundation.h>
#import "SWGObject.h"


@interface SamiTrialsConnectedDevice : SWGObject

@property(nonatomic) NSNumber* connected_on;  
@property(nonatomic) NSString* dtid;  
@property(nonatomic) NSString* _id;  
@property(nonatomic) NSNumber* manifestVersion;  
@property(nonatomic) NSString* manifestVersionPolicy;  
@property(nonatomic) NSString* name;  
@property(nonatomic) NSString* uid;  
- (id) connected_on: (NSNumber*) connected_on     
    dtid: (NSString*) dtid     
    _id: (NSString*) _id     
    manifestVersion: (NSNumber*) manifestVersion     
    manifestVersionPolicy: (NSString*) manifestVersionPolicy     
    name: (NSString*) name     
    uid: (NSString*) uid;
    

- (id) initWithValues: (NSDictionary*)dict;
- (NSDictionary*) asDictionary;

@end
