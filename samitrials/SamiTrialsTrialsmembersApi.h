#import <Foundation/Foundation.h>
#import "SamiTrialsTrialAdministratorsEnvelope.h"
#import "SamiTrialsTrialParticipantRelEnvelope.h"
#import "SamiTrialsTrialInvitationsEnvelope.h"
#import "SamiTrialsTrialInvitationEnvelope.h"
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
 
 Get Administrators for a Trial
 

 
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
 
 Delete administrator from Trial
 

 
 @param trialId Trial ID
 
 @param userId User ID
 

 return type: SamiTrialsTrialParticipantRelEnvelope*
 */
-(NSNumber*) deleteTrialAdministratorWithCompletionBlock :(NSString*) trialId 
     userId:(NSString*) userId 
    
    completionHandler: (void (^)(SamiTrialsTrialParticipantRelEnvelope* output, NSError* error))completionBlock;
    


/**

 Find Trial Invitations
 
 Returns invitations for a Trial that match a status
 

 
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
 
 Create a new Trial Invitation
 

 
 @param trialId The trial ID
 
 @param invitationInfo Trial Invitation that needs to be added
 

 return type: SamiTrialsTrialInvitationEnvelope*
 */
-(NSNumber*) createTrialInvitationWithCompletionBlock :(NSString*) trialId 
     invitationInfo:(SamiTrialsTrialInvitationInfo*) invitationInfo 
    
    completionHandler: (void (^)(SamiTrialsTrialInvitationEnvelope* output, NSError* error))completionBlock;
    


/**

 Update Trial Invitation
 
 Update an existing Trial Invitation
 

 
 @param trialId The Trial ID
 
 @param invitationId The Invitation ID
 
 @param invitationInfo New status of the Trial Invitation
 

 return type: SamiTrialsTrialInvitationEnvelope*
 */
-(NSNumber*) updateTrialInvitationWithCompletionBlock :(NSString*) trialId 
     invitationId:(NSString*) invitationId 
     invitationInfo:(SamiTrialsTrialInvitationStatusInfo*) invitationInfo 
    
    completionHandler: (void (^)(SamiTrialsTrialInvitationEnvelope* output, NSError* error))completionBlock;
    


/**

 Delete Trial Invitation
 
 Deletes an existing trial invitation
 

 
 @param trialId The trial ID
 
 @param invitationId The trial ID
 

 return type: SamiTrialsTrialInvitationEnvelope*
 */
-(NSNumber*) deleteTrialInvitationWithCompletionBlock :(NSString*) trialId 
     invitationId:(NSString*) invitationId 
    
    completionHandler: (void (^)(SamiTrialsTrialInvitationEnvelope* output, NSError* error))completionBlock;
    


/**

 Get Trial Participants
 
 Find Participants for Trial
 

 
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
 
 Delete participant from Trial
 

 
 @param trialId Trial ID
 
 @param userId User ID
 

 return type: SamiTrialsTrialParticipantRelEnvelope*
 */
-(NSNumber*) deleteTrialParticipantWithCompletionBlock :(NSString*) trialId 
     userId:(NSString*) userId 
    
    completionHandler: (void (^)(SamiTrialsTrialParticipantRelEnvelope* output, NSError* error))completionBlock;
    



@end