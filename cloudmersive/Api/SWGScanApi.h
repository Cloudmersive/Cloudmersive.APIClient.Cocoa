#import <Foundation/Foundation.h>
#import "SWGInlineResponse20019.h"
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



@interface SWGScanApi: NSObject <SWGApi>

extern NSString* kSWGScanApiErrorDomain;
extern NSInteger kSWGScanApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(SWGApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Scan a file for viruses
/// 
///
/// @param inputFile Input file to perform the operation on.
/// 
///  code:200 message:"OK"
///
/// @return SWGInlineResponse20019*
-(NSURLSessionTask*) scanFileWithInputFile: (NSURL*) inputFile
    completionHandler: (void (^)(SWGInlineResponse20019* output, NSError* error)) handler;



@end
