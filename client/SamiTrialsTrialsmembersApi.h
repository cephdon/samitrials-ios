#import <Foundation/Foundation.h>
#import "SamiTrialsTrialAdministratorsEnvelope.h"
#import "SamiTrialsTrialParticipantRel.h"
#import "SamiTrialsTrialInvitationsEnvelope.h"
#import "SamiTrialsTrialInvitation.h"
#import "SamiTrialsTrialInvitationInfo.h"
#import "SamiTrialsTrialInvitationStatusInfo.h"
#import "SamiTrialsTrialParticipantsEnvelope.h"
#import "SWGObject.h"


@interface SamiTrialsTrialsmembersApi: NSObject

-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SamiTrialsTrialsmembersApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(void) setBasePath:(NSString*)basePath;
+(NSString*) getBasePath;
/**

 
 
 Get Trial Administrators
 

 
 @param trialId Trial ID
 
 @param count Desired count of items in the result set.
 
 @param offset Offset for pagination.
 

 return type: SamiTrialsTrialAdministratorsEnvelope*
 */
-(NSNumber*) getTrialAdministratorsWithCompletionBlock :(NSString*) trialId 
     count:(NSNumber*) count 
     offset:(NSNumber*) offset 
    
    completionHandler: (void (^)(SamiTrialsTrialAdministratorsEnvelope* output, NSError* error))completionBlock;
    


/**

 
 
 Delete Trial Administrator
 

 
 @param trialId Trial ID
 
 @param userId User ID
 

 return type: SamiTrialsTrialParticipantRel*
 */
-(NSNumber*) deleteTrialAdministratorWithCompletionBlock :(NSString*) trialId 
     userId:(NSString*) userId 
    
    completionHandler: (void (^)(SamiTrialsTrialParticipantRel* output, NSError* error))completionBlock;
    


/**

 
 
 Find Trial Invitations
 

 
 @param trialId The trial ID
 
 @param status Trial invitation status
 
 @param count Desired count of items in the result set.
 
 @param offset Offset for pagination.
 

 return type: SamiTrialsTrialInvitationsEnvelope*
 */
-(NSNumber*) getTrialInvitationsWithCompletionBlock :(NSString*) trialId 
     status:(NSString*) status 
     count:(NSNumber*) count 
     offset:(NSNumber*) offset 
    
    completionHandler: (void (^)(SamiTrialsTrialInvitationsEnvelope* output, NSError* error))completionBlock;
    


/**

 
 
 Create Trial Invitation
 

 
 @param trialId The trial ID
 
 @param  Trial Invitation that needs to be added
 

 return type: SamiTrialsTrialInvitation*
 */
-(NSNumber*) createTrialInvitationWithCompletionBlock :(NSString*) trialId 
     :(SamiTrialsTrialInvitationInfo*)  
    
    completionHandler: (void (^)(SamiTrialsTrialInvitation* output, NSError* error))completionBlock;
    


/**

 
 
 Update Trial Invitation
 

 
 @param trialId The Trial ID
 
 @param invitationId The Invitation ID
 
 @param  New status of the Trial Invitation
 

 return type: SamiTrialsTrialInvitation*
 */
-(NSNumber*) updateTrialInvitationWithCompletionBlock :(NSString*) trialId 
     invitationId:(NSString*) invitationId 
     :(SamiTrialsTrialInvitationStatusInfo*)  
    
    completionHandler: (void (^)(SamiTrialsTrialInvitation* output, NSError* error))completionBlock;
    


/**

 
 
 Delete Trial Invitation
 

 
 @param trialId The trial ID
 
 @param invitationId The trial ID
 

 return type: SamiTrialsTrialInvitation*
 */
-(NSNumber*) deleteTrialInvitationWithCompletionBlock :(NSString*) trialId 
     invitationId:(NSString*) invitationId 
    
    completionHandler: (void (^)(SamiTrialsTrialInvitation* output, NSError* error))completionBlock;
    


/**

 
 
 Get Trial Participants
 

 
 @param trialId Trial ID
 
 @param count Desired count of items in the result set.
 
 @param offset Offset for pagination.
 

 return type: SamiTrialsTrialParticipantsEnvelope*
 */
-(NSNumber*) getTrialParticipantsWithCompletionBlock :(NSString*) trialId 
     count:(NSNumber*) count 
     offset:(NSNumber*) offset 
    
    completionHandler: (void (^)(SamiTrialsTrialParticipantsEnvelope* output, NSError* error))completionBlock;
    


/**

 
 
 Delete Trial Participant
 

 
 @param trialId Trial ID
 
 @param userId User ID
 

 return type: SamiTrialsTrialParticipantRel*
 */
-(NSNumber*) deleteTrialParticipantWithCompletionBlock :(NSString*) trialId 
     userId:(NSString*) userId 
    
    completionHandler: (void (^)(SamiTrialsTrialParticipantRel* output, NSError* error))completionBlock;
    



@end