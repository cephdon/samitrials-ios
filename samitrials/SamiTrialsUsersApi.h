#import <Foundation/Foundation.h>
#import "SamiTrialsTrialsEnvelope.h"
#import "SWGObject.h"


@interface SamiTrialsUsersApi: NSObject

-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SamiTrialsUsersApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(void) setBasePath:(NSString*)basePath;
+(NSString*) getBasePath;
/**

 
 
 Get User Trials
 

 
 @param userId User ID.
 
 @param role Role of user
 
 @param count Desired count of items in the result set.
 
 @param offset Offset for pagination.
 

 return type: SamiTrialsTrialsEnvelope*
 */
-(NSNumber*) getUserTrialsWithCompletionBlock :(NSString*) userId 
     role:(NSString*) role 
     count:(NSNumber*) count 
     offset:(NSNumber*) offset 
    
    completionHandler: (void (^)(SamiTrialsTrialsEnvelope* output, NSError* error))completionBlock;
    



@end