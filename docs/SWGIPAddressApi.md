# SWGIPAddressApi

All URIs are relative to *https://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**iPAddressPost**](SWGIPAddressApi.md#ipaddresspost) | **POST** /validate/ip/geolocate | Geolocate an IP address


# **iPAddressPost**
```objc
-(NSURLSessionTask*) iPAddressPostWithValue: (NSString*) value
        completionHandler: (void (^)(SWGInlineResponse2005* output, NSError* error)) handler;
```

Geolocate an IP address

Identify an IP address Country, State/Provence, City, Zip/Postal Code, etc.  Useful for security and UX applications.

### Example 
```objc

NSString* value = value_example; // IP address to geolocate, e.g. \"55.55.55.55\"

SWGIPAddressApi*apiInstance = [[SWGIPAddressApi alloc] init];

// Geolocate an IP address
[apiInstance iPAddressPostWithValue:value
          completionHandler: ^(SWGInlineResponse2005* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGIPAddressApi->iPAddressPost: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **value** | **NSString***| IP address to geolocate, e.g. \&quot;55.55.55.55\&quot; | 

### Return type

[**SWGInlineResponse2005***](SWGInlineResponse2005.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json, text/json, application/xml, text/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

