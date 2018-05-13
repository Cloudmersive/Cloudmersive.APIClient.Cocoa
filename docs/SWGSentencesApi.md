# SWGSentencesApi

All URIs are relative to *https://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**sentencesPost**](SWGSentencesApi.md#sentencespost) | **POST** /nlp/get/sentences/string | Extract sentences from string


# **sentencesPost**
```objc
-(NSURLSessionTask*) sentencesPostWithInput: (NSString*) input
        completionHandler: (void (^)(NSString* output, NSError* error)) handler;
```

Extract sentences from string

Segment an input string into separate sentences, output result as a string.

### Example 
```objc

NSString* input = input_example; // Input string

SWGSentencesApi*apiInstance = [[SWGSentencesApi alloc] init];

// Extract sentences from string
[apiInstance sentencesPostWithInput:input
          completionHandler: ^(NSString* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGSentencesApi->sentencesPost: %@", error);
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

