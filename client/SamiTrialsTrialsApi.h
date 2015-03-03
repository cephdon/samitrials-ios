#import <Foundation/Foundation.h>
#import "SamiTrialsTrialInfo.h"
#import "SamiTrialsTrial.h"
#import "SamiTrialsTrialUpdateInfo.h"
#import "SWGObject.h"


@interface SamiTrialsTrialsApi: NSObject

-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SamiTrialsTrialsApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(void) setBasePath:(NSString*)basePath;
+(NSString*) getBasePath;
/**

 
 
 Create Trial
 

 
 @param  Trial object that needs to added
 

 return type: SamiTrialsTrial*
 */
-(NSNumber*) createTrialWithCompletionBlock :(SamiTrialsTrialInfo*)  
    
    completionHandler: (void (^)(SamiTrialsTrial* output, NSError* error))completionBlock;
    


/**

 
 
 Find Trial
 

 
 @param trialId Trial ID
 

 return type: SamiTrialsTrial*
 */
-(NSNumber*) getTrialWithCompletionBlock :(NSString*) trialId 
    
    completionHandler: (void (^)(SamiTrialsTrial* output, NSError* error))completionBlock;
    


/**

 
 
 Update Trial
 

 
 @param trialId The Trial ID
 
 @param  Trial object that needs to be updated
 

 return type: SamiTrialsTrial*
 */
-(NSNumber*) updateTrialWithCompletionBlock :(NSString*) trialId 
     :(SamiTrialsTrialUpdateInfo*)  
    
    completionHandler: (void (^)(SamiTrialsTrial* output, NSError* error))completionBlock;
    


/**

 
 
 Delete Trial
 

 
 @param trialId The trial ID
 

 return type: SamiTrialsTrial*
 */
-(NSNumber*) deleteTrialWithCompletionBlock :(NSString*) trialId 
    
    completionHandler: (void (^)(SamiTrialsTrial* output, NSError* error))completionBlock;
    



@end