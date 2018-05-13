#import <Foundation/Foundation.h>
#import "SWGInlineResponse2002.h"
#import "SWGInlineResponse2003.h"
#import "SWGInlineResponse2004.h"
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



@interface SWGEmailApi: NSObject <SWGApi>

extern NSString* kSWGEmailApiErrorDomain;
extern NSInteger kSWGEmailApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(SWGApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Partially check whether an email address is valid
/// Validate an email address by identifying whether its parent domain has email servers defined.  This call is less limited than syntaxOnly but not as comprehensive as address/full.
///
/// @param email Email address to validate, e.g. \&quot;support@cloudmersive.com\&quot;
/// 
///  code:200 message:"OK"
///
/// @return SWGInlineResponse2003*
-(NSURLSessionTask*) emailAddressGetServersWithEmail: (NSString*) email
    completionHandler: (void (^)(SWGInlineResponse2003* output, NSError* error)) handler;


/// Fully validate an email address
/// Performs a full validation of the email address.  Checks for syntactic correctness, identifies the mail server in question if any, and then contacts the email server to validate the existence of the account - without sending any emails.
///
/// @param email Email address to validate, e.g. \&quot;support@cloudmersive.com\&quot;
/// 
///  code:200 message:"OK"
///
/// @return SWGInlineResponse2004*
-(NSURLSessionTask*) emailFullValidationWithEmail: (NSString*) email
    completionHandler: (void (^)(SWGInlineResponse2004* output, NSError* error)) handler;


/// Validate email adddress for syntactic correctness only
/// Validate whether a given email address is syntactically correct via a limited local-only check.  Use the address/full API to do a full validation.
///
/// @param value Email address to validate, e.g. \&quot;support@cloudmersive.com\&quot;
/// 
///  code:200 message:"OK"
///
/// @return SWGInlineResponse2002*
-(NSURLSessionTask*) emailPostWithValue: (NSString*) value
    completionHandler: (void (^)(SWGInlineResponse2002* output, NSError* error)) handler;



@end