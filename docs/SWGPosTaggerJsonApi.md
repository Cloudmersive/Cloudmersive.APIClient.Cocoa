# SWGPosTaggerJsonApi

All URIs are relative to *https://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**posTaggerJsonPost**](SWGPosTaggerJsonApi.md#postaggerjsonpost) | **POST** /nlp/PosTaggerJson | Part-of-speech tag a string


# **posTaggerJsonPost**
```objc
-(NSURLSessionTask*) posTaggerJsonPostWithRequest: (SWGRequest*) request
        completionHandler: (void (^)(SWGInlineResponse2008* output, NSError* error)) handler;
```

Part-of-speech tag a string

Part-of-speech (POS) tag a string and return result as JSON

### Example 
```objc

SWGRequest* request = [[SWGRequest alloc] init]; // Input string

SWGPosTaggerJsonApi*apiInstance = [[SWGPosTaggerJsonApi alloc] init];

// Part-of-speech tag a string
[apiInstance posTaggerJsonPostWithRequest:request
          completionHandler: ^(SWGInlineResponse2008* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGPosTaggerJsonApi->posTaggerJsonPost: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **request** | [**SWGRequest***](SWGRequest.md)| Input string | 

### Return type

[**SWGInlineResponse2008***](SWGInlineResponse2008.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json, text/json, application/xml, text/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

