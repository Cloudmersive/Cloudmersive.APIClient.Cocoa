# SWGDomainApi

All URIs are relative to *https://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**domainCheck**](SWGDomainApi.md#domaincheck) | **POST** /validate/domain/check | Validate a domain name
[**domainPost**](SWGDomainApi.md#domainpost) | **POST** /validate/domain/whois | Get WHOIS information for a domain


# **domainCheck**
```objc
-(NSURLSessionTask*) domainCheckWithDomain: (NSString*) domain
        completionHandler: (void (^)(SWGInlineResponse200* output, NSError* error)) handler;
```

Validate a domain name

Check whether a domain name is valid or not.  API performs a live validation by contacting DNS services to validate the existence of the domain name.

### Example 
```objc

NSString* domain = domain_example; // Domain name to check, for example \"cloudmersive.com\"

SWGDomainApi*apiInstance = [[SWGDomainApi alloc] init];

// Validate a domain name
[apiInstance domainCheckWithDomain:domain
          completionHandler: ^(SWGInlineResponse200* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGDomainApi->domainCheck: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **domain** | **NSString***| Domain name to check, for example \&quot;cloudmersive.com\&quot; | 

### Return type

[**SWGInlineResponse200***](SWGInlineResponse200.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json, text/json, application/xml, text/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **domainPost**
```objc
-(NSURLSessionTask*) domainPostWithDomain: (NSString*) domain
        completionHandler: (void (^)(SWGInlineResponse2001* output, NSError* error)) handler;
```

Get WHOIS information for a domain

Validate whether a domain name exists, and also return the full WHOIS record for that domain name.  WHOIS records include all the registration details of the domain name, such as information about the domain's owners.

### Example 
```objc

NSString* domain = domain_example; // Domain name to check, for example \"cloudmersive.com\"

SWGDomainApi*apiInstance = [[SWGDomainApi alloc] init];

// Get WHOIS information for a domain
[apiInstance domainPostWithDomain:domain
          completionHandler: ^(SWGInlineResponse2001* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGDomainApi->domainPost: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **domain** | **NSString***| Domain name to check, for example \&quot;cloudmersive.com\&quot; | 

### Return type

[**SWGInlineResponse2001***](SWGInlineResponse2001.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json, text/json, application/xml, text/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

