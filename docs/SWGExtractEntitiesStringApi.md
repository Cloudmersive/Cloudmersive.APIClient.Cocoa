# SWGExtractEntitiesStringApi

All URIs are relative to *https://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**extractEntitiesStringPost**](SWGExtractEntitiesStringApi.md#extractentitiesstringpost) | **POST** /nlp/ExtractEntitiesString | Extract entities from string


# **extractEntitiesStringPost**
```objc
-(NSURLSessionTask*) extractEntitiesStringPostWithValue: (NSString*) value
        completionHandler: (void (^)(NSString* output, NSError* error)) handler;
```

Extract entities from string

Extract the named entitites from an input string.

### Example 
```objc

NSString* value = value_example; // Input string

SWGExtractEntitiesStringApi*apiInstance = [[SWGExtractEntitiesStringApi alloc] init];

// Extract entities from string
[apiInstance extractEntitiesStringPostWithValue:value
          completionHandler: ^(NSString* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGExtractEntitiesStringApi->extractEntitiesStringPost: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **value** | **NSString***| Input string | 

### Return type

**NSString***

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json, text/json, application/xml, text/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

