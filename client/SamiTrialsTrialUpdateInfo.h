#import <Foundation/Foundation.h>
#import "SWGObject.h"
#import "SamiTrialsTrialStatus.h"


@interface SamiTrialsTrialUpdateInfo : SWGObject

@property(nonatomic) NSString* _description;  /* Description of the trial.  */
@property(nonatomic) NSNumber* endDate;  /* End date of the Trial (in milliseconds since epoch)  */
@property(nonatomic) NSString* name;  /* Name of the trial.  */
@property(nonatomic) NSNumber* startDate;  /* Start date of the Trial (in milliseconds since epoch)  */
@property(nonatomic) SamiTrialsTrialStatus* status;  /* Status.  */
- (id) _description: (NSString*) _description     
    endDate: (NSNumber*) endDate     
    name: (NSString*) name     
    startDate: (NSNumber*) startDate     
    status: (SamiTrialsTrialStatus*) status;
    

- (id) initWithValues: (NSDictionary*)dict;
- (NSDictionary*) asDictionary;

@end
