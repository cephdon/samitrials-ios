#import <Foundation/Foundation.h>
#import "SamiTrialsConnectedDevicesEnvelope.h"
#import "SamiTrialsDeviceTypesEnvelope.h"
#import "SamiTrialsTrialDeviceTypeRel.h"
#import "SamiTrialsDeviceTypeInfo.h"
#import "SamiTrialsTrialUserDeviceRel.h"
#import "SamiTrialsDeviceInfo.h"
#import "SWGObject.h"


@interface SamiTrialsTrialsdevicesApi: NSObject

-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SamiTrialsTrialsdevicesApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(void) setBasePath:(NSString*)basePath;
+(NSString*) getBasePath;
/**

 
 
 Get Trial Connected Devices
 

 
 @param trialId Trial ID
 
 @param count Desired count of items in the result set.
 
 @param offset Offset for pagination.
 

 return type: SamiTrialsConnectedDevicesEnvelope*
 */
-(NSNumber*) getConnectedDevicesWithCompletionBlock :(NSString*) trialId 
     count:(NSNumber*) count 
     offset:(NSNumber*) offset 
    
    completionHandler: (void (^)(SamiTrialsConnectedDevicesEnvelope* output, NSError* error))completionBlock;
    


/**

 
 
 Get Trial Device Types
 

 
 @param trialId Trial ID
 
 @param count Desired count of items in the result set.
 
 @param offset Offset for pagination.
 

 return type: SamiTrialsDeviceTypesEnvelope*
 */
-(NSNumber*) getTrialDeviceTypesWithCompletionBlock :(NSString*) trialId 
     count:(NSNumber*) count 
     offset:(NSNumber*) offset 
    
    completionHandler: (void (^)(SamiTrialsDeviceTypesEnvelope* output, NSError* error))completionBlock;
    


/**

 
 
 Add Trial Device Type
 

 
 @param trialId Trial ID
 
 @param  DeviceType ID that needs to be added to the Trial
 

 return type: SamiTrialsTrialDeviceTypeRel*
 */
-(NSNumber*) addTrialDeviceTypeWithCompletionBlock :(NSString*) trialId 
     :(SamiTrialsDeviceTypeInfo*)  
    
    completionHandler: (void (^)(SamiTrialsTrialDeviceTypeRel* output, NSError* error))completionBlock;
    


/**

 
 
 Get User Connected Devices
 

 
 @param trialId Trial ID
 
 @param userId User ID
 
 @param count Desired count of items in the result set.
 
 @param offset Offset for pagination.
 

 return type: SamiTrialsConnectedDevicesEnvelope*
 */
-(NSNumber*) getUserConnectedDevicesWithCompletionBlock :(NSString*) trialId 
     userId:(NSString*) userId 
     count:(NSNumber*) count 
     offset:(NSNumber*) offset 
    
    completionHandler: (void (^)(SamiTrialsConnectedDevicesEnvelope* output, NSError* error))completionBlock;
    


/**

 
 
 Connect User Device
 

 
 @param trialId Trial ID
 
 @param userId User ID
 
 @param  ID of the Device that needs to be added
 

 return type: SamiTrialsTrialUserDeviceRel*
 */
-(NSNumber*) connectTrialDeviceWithCompletionBlock :(NSString*) trialId 
     userId:(NSString*) userId 
     :(SamiTrialsDeviceInfo*)  
    
    completionHandler: (void (^)(SamiTrialsTrialUserDeviceRel* output, NSError* error))completionBlock;
    


/**

 
 
 Disconnect User Device
 

 
 @param trialId Trial ID
 
 @param userId User ID
 
 @param deviceId Device ID
 

 return type: SamiTrialsTrialUserDeviceRel*
 */
-(NSNumber*) disconnectTrialDeviceWithCompletionBlock :(NSString*) trialId 
     userId:(NSString*) userId 
     deviceId:(NSString*) deviceId 
    
    completionHandler: (void (^)(SamiTrialsTrialUserDeviceRel* output, NSError* error))completionBlock;
    



@end