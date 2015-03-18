#import <Foundation/Foundation.h>
#import "SamiTrialsConnectedDevicesEnvelope.h"
#import "SamiTrialsDeviceTypesEnvelope.h"
#import "SamiTrialsTrialDeviceTypeRel.h"
#import "SamiTrialsDeviceTypeInfo.h"
#import "SamiTrialsTrialUserDeviceRelEnvelope.h"
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
 
 Get Connected Devices for a Trial
 

 
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
 
 Find DeviceType for Trial
 

 
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
 
 Add a DeviceType to Trial
 

 
 @param trialId Trial ID
 
 @param deviceTypeInfo DeviceType ID that needs to be added to the Trial
 

 return type: SamiTrialsTrialDeviceTypeRel*
 */
-(NSNumber*) addTrialDeviceTypeWithCompletionBlock :(NSString*) trialId 
     deviceTypeInfo:(SamiTrialsDeviceTypeInfo*) deviceTypeInfo 
    
    completionHandler: (void (^)(SamiTrialsTrialDeviceTypeRel* output, NSError* error))completionBlock;
    


/**

 Get User Connected Devices
 
 Get Connected Devices of a User for a Trial
 

 
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
 
 Add a User Device to a Trial
 

 
 @param trialId Trial ID
 
 @param userId User ID
 
 @param deviceInfo ID of the Device that needs to be added
 

 return type: SamiTrialsTrialUserDeviceRelEnvelope*
 */
-(NSNumber*) connectTrialDeviceWithCompletionBlock :(NSString*) trialId 
     userId:(NSString*) userId 
     deviceInfo:(SamiTrialsDeviceInfo*) deviceInfo 
    
    completionHandler: (void (^)(SamiTrialsTrialUserDeviceRelEnvelope* output, NSError* error))completionBlock;
    


/**

 Disconnect User Device
 
 Remove a User Device from a Trial
 

 
 @param trialId Trial ID
 
 @param userId User ID
 
 @param deviceId Device ID
 

 return type: SamiTrialsTrialUserDeviceRelEnvelope*
 */
-(NSNumber*) disconnectTrialDeviceWithCompletionBlock :(NSString*) trialId 
     userId:(NSString*) userId 
     deviceId:(NSString*) deviceId 
    
    completionHandler: (void (^)(SamiTrialsTrialUserDeviceRelEnvelope* output, NSError* error))completionBlock;
    



@end