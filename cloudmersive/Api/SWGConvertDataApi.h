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



@interface SWGConvertDataApi: NSObject <SWGApi>

extern NSString* kSWGConvertDataApiErrorDomain;
extern NSInteger kSWGConvertDataApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(SWGApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// CSV to JSON conversion
/// Convert a CSV file to a JSON object array
///
/// @param inputFile Input file to perform the operation on.
/// 
///  code:200 message:"OK"
///
/// @return NSObject*
-(NSURLSessionTask*) convertDataCsvToJsonWithInputFile: (NSURL*) inputFile
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


/// XML to JSON conversion
/// Convert an XML string or file into JSON
///
/// 
///  code:200 message:"OK"
///
/// @return NSObject*
-(NSURLSessionTask*) convertDataXmlToJsonWithCompletionHandler: 
    (void (^)(NSObject* output, NSError* error)) handler;



@end
