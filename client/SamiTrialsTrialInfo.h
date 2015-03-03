#import <Foundation/Foundation.h>
#import "SWGObject.h"


@interface SamiTrialsTrialInfo : SWGObject

@property(nonatomic) NSString* _description;  /* Description of the trial.  */
@property(nonatomic) NSString* name;  /* Name of the trial.  */
- (id) _description: (NSString*) _description     
    name: (NSString*) name;
    

- (id) initWithValues: (NSDictionary*)dict;
- (NSDictionary*) asDictionary;

@end
