# SWGEmailApi

All URIs are relative to *https://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**emailAddressGetServers**](SWGEmailApi.md#emailaddressgetservers) | **POST** /validate/email/address/servers | Partially check whether an email address is valid
[**emailFullValidation**](SWGEmailApi.md#emailfullvalidation) | **POST** /validate/email/address/full | Fully validate an email address
[**emailPost**](SWGEmailApi.md#emailpost) | **POST** /validate/email/address/syntaxOnly | Validate email adddress for syntactic correctness only


# **emailAddressGetServers**
```objc
-(NSURLSessionTask*) emailAddressGetServersWithEmail: (NSString*) email
        completionHandler: (void (^)(SWGInlineResponse2003* output, NSError* error)) handler;
```

Partially check whether an email address is valid

Validate an email address by identifying whether its parent domain has email servers defined.  This call is less limited than syntaxOnly but not as comprehensive as address/full.

### Example 
```objc

NSString* email = email_example; // Email address to validate, e.g. \"support@cloudmersive.com\"

SWGEmailApi*apiInstance = [[SWGEmailApi alloc] init];

// Partially check whether an email address is valid
[apiInstance emailAddressGetServersWithEmail:email
          completionHandler: ^(SWGInlineResponse2003* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGEmailApi->emailAddressGetServers: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **email** | **NSString***| Email address to validate, e.g. \&quot;support@cloudmersive.com\&quot; | 

### Return type

[**SWGInlineResponse2003***](SWGInlineResponse2003.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json, text/json, application/xml, text/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **emailFullValidation**
```objc
-(NSURLSessionTask*) emailFullValidationWithEmail: (NSString*) email
        completionHandler: (void (^)(SWGInlineResponse2004* output, NSError* error)) handler;
```

Fully validate an email address

Performs a full validation of the email address.  Checks for syntactic correctness, identifies the mail server in question if any, and then contacts the email server to validate the existence of the account - without sending any emails.

### Example 
```objc

NSString* email = email_example; // Email address to validate, e.g. \"support@cloudmersive.com\"

SWGEmailApi*apiInstance = [[SWGEmailApi alloc] init];

// Fully validate an email address
[apiInstance emailFullValidationWithEmail:email
          completionHandler: ^(SWGInlineResponse2004* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGEmailApi->emailFullValidation: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **email** | **NSString***| Email address to validate, e.g. \&quot;support@cloudmersive.com\&quot; | 

### Return type

[**SWGInlineResponse2004***](SWGInlineResponse2004.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json, text/json, application/xml, text/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **emailPost**
```objc
-(NSURLSessionTask*) emailPostWithValue: (NSString*) value
        completionHandler: (void (^)(SWGInlineResponse2002* output, NSError* error)) handler;
```

Validate email adddress for syntactic correctness only

Validate whether a given email address is syntactically correct via a limited local-only check.  Use the address/full API to do a full validation.

### Example 
```objc

NSString* value = value_example; // Email address to validate, e.g. \"support@cloudmersive.com\"

SWGEmailApi*apiInstance = [[SWGEmailApi alloc] init];

// Validate email adddress for syntactic correctness only
[apiInstance emailPostWithValue:value
          completionHandler: ^(SWGInlineResponse2002* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGEmailApi->emailPost: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **value** | **NSString***| Email address to validate, e.g. \&quot;support@cloudmersive.com\&quot; | 

### Return type

[**SWGInlineResponse2002***](SWGInlineResponse2002.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json, text/json, application/xml, text/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

