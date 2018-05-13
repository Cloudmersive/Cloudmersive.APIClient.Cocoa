#import <Foundation/Foundation.h>
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



@interface SWGSentencesApi: NSObject <SWGApi>

extern NSString* kSWGSentencesApiErrorDomain;
extern NSInteger kSWGSentencesApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(SWGApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Extract sentences from string
/// Segment an input string into separate sentences, output result as a string.
///
/// @param input Input string
/// 
///  code:200 message:"OK"
///
/// @return NSString*
-(NSURLSessionTask*) sentencesPostWithInput: (NSString*) input
    completionHandler: (void (^)(NSString* output, NSError* error)) handler;



@end