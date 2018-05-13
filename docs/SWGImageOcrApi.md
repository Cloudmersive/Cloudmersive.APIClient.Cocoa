# SWGImageOcrApi

All URIs are relative to *https://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**imageOcrPost**](SWGImageOcrApi.md#imageocrpost) | **POST** /ocr/image/toText | Converts an uploaded image in common formats such as JPEG, PNG into text via Optical Character Recognition.


# **imageOcrPost**
```objc
-(NSURLSessionTask*) imageOcrPostWithImageFile: (NSURL*) imageFile
        completionHandler: (void (^)(SWGInlineResponse20013* output, NSError* error)) handler;
```

Converts an uploaded image in common formats such as JPEG, PNG into text via Optical Character Recognition.

### Example 
```objc

NSURL* imageFile = [NSURL fileURLWithPath:@"/path/to/file.txt"]; // Image file to perform OCR on.  Common file formats such as PNG, JPEG are supported.

SWGImageOcrApi*apiInstance = [[SWGImageOcrApi alloc] init];

// Converts an uploaded image in common formats such as JPEG, PNG into text via Optical Character Recognition.
[apiInstance imageOcrPostWithImageFile:imageFile
          completionHandler: ^(SWGInlineResponse20013* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGImageOcrApi->imageOcrPost: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **imageFile** | **NSURL***| Image file to perform OCR on.  Common file formats such as PNG, JPEG are supported. | 

### Return type

[**SWGInlineResponse20013***](SWGInlineResponse20013.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json, text/json, application/xml, text/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

