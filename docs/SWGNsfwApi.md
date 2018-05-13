# SWGNsfwApi

All URIs are relative to *https://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**nsfwClassify**](SWGNsfwApi.md#nsfwclassify) | **POST** /image/nsfw/classify | NSFW image classifier


# **nsfwClassify**
```objc
-(NSURLSessionTask*) nsfwClassifyWithImageFile: (NSURL*) imageFile
        completionHandler: (void (^)(SWGInlineResponse20016* output, NSError* error)) handler;
```

NSFW image classifier

Classify an image into Not Safe For Work (NSFW)/Porn/Racy content and Safe Content.

### Example 
```objc

NSURL* imageFile = [NSURL fileURLWithPath:@"/path/to/file.txt"]; // Image file to perform the operation on.  Common file formats such as PNG, JPEG are supported.

SWGNsfwApi*apiInstance = [[SWGNsfwApi alloc] init];

// NSFW image classifier
[apiInstance nsfwClassifyWithImageFile:imageFile
          completionHandler: ^(SWGInlineResponse20016* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGNsfwApi->nsfwClassify: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **imageFile** | **NSURL***| Image file to perform the operation on.  Common file formats such as PNG, JPEG are supported. | 

### Return type

[**SWGInlineResponse20016***](SWGInlineResponse20016.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json, text/json, application/xml, text/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

