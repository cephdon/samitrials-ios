#import <Foundation/Foundation.h>
#import "SWGObject.h"
#import "SamiTrialsTrialStatus.h"


@interface SamiTrialsTrialUpdateInfo : SWGObject

@property(nonatomic) NSString* _description;  /* Description of the trial.  */
@property(nonatomic) NSString* name;  /* Name of the trial.  */
@property(nonatomic) SamiTrialsTrialStatus* status;  /* Status.  */
- (id) _description: (NSString*) _description     
    name: (NSString*) name     
    status: (SamiTrialsTrialStatus*) status;
    

- (id) initWithValues: (NSDictionary*)dict;
- (NSDictionary*) asDictionary;

@end
