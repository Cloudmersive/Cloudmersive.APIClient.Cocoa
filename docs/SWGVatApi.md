# SWGVatApi

All URIs are relative to *https://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**vatVatLookup**](SWGVatApi.md#vatvatlookup) | **POST** /validate/vat/lookup | Lookup a VAT code


# **vatVatLookup**
```objc
-(NSURLSessionTask*) vatVatLookupWithInput: (SWGInput*) input
        completionHandler: (void (^)(SWGInlineResponse2006* output, NSError* error)) handler;
```

Lookup a VAT code

Checks if a VAT code is valid, and if it is, returns more information about it

### Example 
```objc

SWGInput* input = [[SWGInput alloc] init]; // Input VAT code

SWGVatApi*apiInstance = [[SWGVatApi alloc] init];

// Lookup a VAT code
[apiInstance vatVatLookupWithInput:input
          completionHandler: ^(SWGInlineResponse2006* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGVatApi->vatVatLookup: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **input** | [**SWGInput***](SWGInput.md)| Input VAT code | 

### Return type

[**SWGInlineResponse2006***](SWGInlineResponse2006.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json, text/json, application/xml, text/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

