# SWGPosTaggerStringApi

All URIs are relative to *https://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**posTaggerStringPost**](SWGPosTaggerStringApi.md#postaggerstringpost) | **POST** /nlp/PosTaggerString | Part-of-speech tag a string


# **posTaggerStringPost**
```objc
-(NSURLSessionTask*) posTaggerStringPostWithInput: (NSString*) input
        completionHandler: (void (^)(NSString* output, NSError* error)) handler;
```

Part-of-speech tag a string

Perform a part-of-speech (POS) tagging on the input string.

### Example 
```objc

NSString* input = input_example; // Input string

SWGPosTaggerStringApi*apiInstance = [[SWGPosTaggerStringApi alloc] init];

// Part-of-speech tag a string
[apiInstance posTaggerStringPostWithInput:input
          completionHandler: ^(NSString* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGPosTaggerStringApi->posTaggerStringPost: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **input** | **NSString***| Input string | 

### Return type

**NSString***

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json, text/json, application/xml, text/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

