#import <Foundation/Foundation.h>
#import "SWGObject.h"

/**
* Cloudmersive
* No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
*
* OpenAPI spec version: 1.2.1
* 
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/


#import "SWGInlineResponse20017BestOutcome.h"
#import "SWGInlineResponse20017RunnerUpOutcome.h"
@protocol SWGInlineResponse20017BestOutcome;
@class SWGInlineResponse20017BestOutcome;
@protocol SWGInlineResponse20017RunnerUpOutcome;
@class SWGInlineResponse20017RunnerUpOutcome;



@protocol SWGInlineResponse20017
@end

@interface SWGInlineResponse20017 : SWGObject

/* Was the image processed successfully? [optional]
 */
@property(nonatomic) NSNumber* successful;
/* Is the resulting best outcome recognition a high confidence outcome? [optional]
 */
@property(nonatomic) NSNumber* highconfidence;

@property(nonatomic) SWGInlineResponse20017BestOutcome* bestOutcome;

@property(nonatomic) SWGInlineResponse20017RunnerUpOutcome* runnerUpOutcome;

@end
