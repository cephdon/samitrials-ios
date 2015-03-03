#import <Foundation/Foundation.h>
#import "SWGObject.h"
#import "SWGDate.h"


@interface SamiTrialsTrial : SWGObject

@property(nonatomic) NSString* _description;  
@property(nonatomic) SWGDate* endDate;  
@property(nonatomic) NSString* _id;  
@property(nonatomic) NSString* name;  
@property(nonatomic) NSString* ownerId;  
@property(nonatomic) SWGDate* startDate;  
- (id) _description: (NSString*) _description     
    endDate: (SWGDate*) endDate     
    _id: (NSString*) _id     
    name: (NSString*) name     
    ownerId: (NSString*) ownerId     
    startDate: (SWGDate*) startDate;
    

- (id) initWithValues: (NSDictionary*)dict;
- (NSDictionary*) asDictionary;

@end
