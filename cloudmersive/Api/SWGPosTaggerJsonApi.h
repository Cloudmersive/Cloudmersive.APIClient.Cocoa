#import <Foundation/Foundation.h>
#import "SWGInlineResponse2008.h"
#import "SWGRequest.h"
#import "SWGApi.h"

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



@interface SWGPosTaggerJsonApi: NSObject <SWGApi>

extern NSString* kSWGPosTaggerJsonApiErrorDomain;
extern NSInteger kSWGPosTaggerJsonApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(SWGApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Part-of-speech tag a string
/// Part-of-speech (POS) tag a string and return result as JSON
///
/// @param request Input string
/// 
///  code:200 message:"OK"
///
/// @return SWGInlineResponse2008*
-(NSURLSessionTask*) posTaggerJsonPostWithRequest: (SWGRequest*) request
    completionHandler: (void (^)(SWGInlineResponse2008* output, NSError* error)) handler;



@end