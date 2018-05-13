# SWGRecognizeApi

All URIs are relative to *https://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**recognizeDescribe**](SWGRecognizeApi.md#recognizedescribe) | **POST** /image/recognize/describe | Describe an image in natural language


# **recognizeDescribe**
```objc
-(NSURLSessionTask*) recognizeDescribeWithImageFile: (NSURL*) imageFile
        completionHandler: (void (^)(SWGInlineResponse20017* output, NSError* error)) handler;
```

Describe an image in natural language

Generate an English language text description of the image as a sentence.

### Example 
```objc

NSURL* imageFile = [NSURL fileURLWithPath:@"/path/to/file.txt"]; // Image file to perform the operation on.  Common file formats such as PNG, JPEG are supported.

SWGRecognizeApi*apiInstance = [[SWGRecognizeApi alloc] init];

// Describe an image in natural language
[apiInstance recognizeDescribeWithImageFile:imageFile
          completionHandler: ^(SWGInlineResponse20017* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGRecognizeApi->recognizeDescribe: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **imageFile** | **NSURL***| Image file to perform the operation on.  Common file formats such as PNG, JPEG are supported. | 

### Return type

[**SWGInlineResponse20017***](SWGInlineResponse20017.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json, text/json, application/xml, text/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

