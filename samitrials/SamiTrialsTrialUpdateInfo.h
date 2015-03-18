#import <Foundation/Foundation.h>
#import "SWGObject.h"


@interface SamiTrialsTrialUpdateInfo : SWGObject

@property(nonatomic) NSString* _description;  /* Description of the trial.  */
@property(nonatomic) NSString* name;  /* Name of the trial.  */
@property(nonatomic) NSString* status;  /* Status.  */
- (id) _description: (NSString*) _description     
    name: (NSString*) name     
    status: (NSString*) status;
    

- (id) initWithValues: (NSDictionary*)dict;
- (NSDictionary*) asDictionary;

@end
