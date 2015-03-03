#import <Foundation/Foundation.h>
#import "SWGObject.h"


@interface SamiTrialsTrialInfo : SWGObject

@property(nonatomic) NSString* _description;  /* Description of the trial.  */
@property(nonatomic) NSNumber* endDate;  /* End date of the Trial (in milliseconds since epoch)  */
@property(nonatomic) NSString* name;  /* Name of the trial.  */
@property(nonatomic) NSNumber* startDate;  /* Start date of the Trial (in milliseconds since epoch)  */
- (id) _description: (NSString*) _description     
    endDate: (NSNumber*) endDate     
    name: (NSString*) name     
    startDate: (NSNumber*) startDate;
    

- (id) initWithValues: (NSDictionary*)dict;
- (NSDictionary*) asDictionary;

@end
