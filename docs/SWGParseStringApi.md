# SWGParseStringApi

All URIs are relative to *https://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**parseStringPost**](SWGParseStringApi.md#parsestringpost) | **POST** /nlp/ParseString | Parse string to syntax tree


# **parseStringPost**
```objc
-(NSURLSessionTask*) parseStringPostWithInput: (NSString*) input
        completionHandler: (void (^)(NSString* output, NSError* error)) handler;
```

Parse string to syntax tree

Parses the input string into a Penn Treebank syntax tree

### Example 
```objc

NSString* input = input_example; // Input string

SWGParseStringApi*apiInstance = [[SWGParseStringApi alloc] init];

// Parse string to syntax tree
[apiInstance parseStringPostWithInput:input
          completionHandler: ^(NSString* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGParseStringApi->parseStringPost: %@", error);
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

