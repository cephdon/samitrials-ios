#import <Foundation/Foundation.h>
#import "SWGObject.h"


@interface SamiTrialsTrial : SWGObject

@property(nonatomic) NSString* aid;  
@property(nonatomic) NSString* clientSecret;  
@property(nonatomic) NSString* _description;  
@property(nonatomic) NSNumber* endDate;  
@property(nonatomic) NSString* _id;  
@property(nonatomic) NSString* name;  
@property(nonatomic) NSString* ownerId;  
@property(nonatomic) NSNumber* startDate;  
- (id) aid: (NSString*) aid     
    clientSecret: (NSString*) clientSecret     
    _description: (NSString*) _description     
    endDate: (NSNumber*) endDate     
    _id: (NSString*) _id     
    name: (NSString*) name     
    ownerId: (NSString*) ownerId     
    startDate: (NSNumber*) startDate;
    

- (id) initWithValues: (NSDictionary*)dict;
- (NSDictionary*) asDictionary;

@end
