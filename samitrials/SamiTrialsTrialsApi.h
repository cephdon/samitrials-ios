#import <Foundation/Foundation.h>
#import "SamiTrialsTrialInfo.h"
#import "SamiTrialsTrialEnvelope.h"
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
 
 Create a new Trial
 

 
 @param trialInfo Trial object that needs to added
 

 return type: SamiTrialsTrialEnvelope*
 */
-(NSNumber*) createTrialWithCompletionBlock :(SamiTrialsTrialInfo*) trialInfo 
    
    completionHandler: (void (^)(SamiTrialsTrialEnvelope* output, NSError* error))completionBlock;
    


/**

 Find Trial
 
 Returns a trial with the specified Trial ID.
 

 
 @param trialId Trial ID
 

 return type: SamiTrialsTrialEnvelope*
 */
-(NSNumber*) getTrialWithCompletionBlock :(NSString*) trialId 
    
    completionHandler: (void (^)(SamiTrialsTrialEnvelope* output, NSError* error))completionBlock;
    


/**

 Update Trial
 
 Updates an existing trial.
 

 
 @param trialId The Trial ID
 
 @param trialInfo Trial object that needs to be updated
 

 return type: SamiTrialsTrialEnvelope*
 */
-(NSNumber*) updateTrialWithCompletionBlock :(NSString*) trialId 
     trialInfo:(SamiTrialsTrialUpdateInfo*) trialInfo 
    
    completionHandler: (void (^)(SamiTrialsTrialEnvelope* output, NSError* error))completionBlock;
    


/**

 Delete Trial
 
 Deletes an existing trial
 

 
 @param trialId The trial ID
 

 return type: SamiTrialsTrialEnvelope*
 */
-(NSNumber*) deleteTrialWithCompletionBlock :(NSString*) trialId 
    
    completionHandler: (void (^)(SamiTrialsTrialEnvelope* output, NSError* error))completionBlock;
    


/**

 Update Trial Application
 
 Updates the Trial with a new application
 

 
 @param trialId The Trial ID
 

 return type: SamiTrialsTrialEnvelope*
 */
-(NSNumber*) updateTrialApplicationWithCompletionBlock :(NSString*) trialId 
    
    completionHandler: (void (^)(SamiTrialsTrialEnvelope* output, NSError* error))completionBlock;
    



@end