#import <Foundation/Foundation.h>
#import "SWGInlineResponse20014.h"
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



@interface SWGBarcodeLookupApi: NSObject <SWGApi>

extern NSString* kSWGBarcodeLookupApiErrorDomain;
extern NSInteger kSWGBarcodeLookupApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(SWGApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Lookup a barcode value and return product data
/// 
///
/// @param value Barcode value
/// 
///  code:200 message:"OK"
///
/// @return SWGInlineResponse20014*
-(NSURLSessionTask*) barcodeLookupEanLookupWithValue: (NSString*) value
    completionHandler: (void (^)(SWGInlineResponse20014* output, NSError* error)) handler;



@end
