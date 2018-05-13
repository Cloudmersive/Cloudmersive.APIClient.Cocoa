# SWGResizeApi

All URIs are relative to *https://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**resizePost**](SWGResizeApi.md#resizepost) | **POST** /image/resize/preserveAspectRatio/{maxWidth}/{maxHeight} | Resize an image with parameters


# **resizePost**
```objc
-(NSURLSessionTask*) resizePostWithMaxWidth: (NSNumber*) maxWidth
    maxHeight: (NSNumber*) maxHeight
    imageFile: (NSURL*) imageFile
        completionHandler: (void (^)(NSObject* output, NSError* error)) handler;
```

Resize an image with parameters

Resize an image to a maximum width and maximum height, while preserving the image's original aspect ratio

### Example 
```objc

NSNumber* maxWidth = @56; // Maximum width of the output image - final image will be as large as possible while less than or equial to this width
NSNumber* maxHeight = @56; // Maximum height of the output image - final image will be as large as possible while less than or equial to this height
NSURL* imageFile = [NSURL fileURLWithPath:@"/path/to/file.txt"]; // Image file to perform the operation on.  Common file formats such as PNG, JPEG are supported.

SWGResizeApi*apiInstance = [[SWGResizeApi alloc] init];

// Resize an image with parameters
[apiInstance resizePostWithMaxWidth:maxWidth
              maxHeight:maxHeight
              imageFile:imageFile
          completionHandler: ^(NSObject* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGResizeApi->resizePost: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **maxWidth** | **NSNumber***| Maximum width of the output image - final image will be as large as possible while less than or equial to this width | 
 **maxHeight** | **NSNumber***| Maximum height of the output image - final image will be as large as possible while less than or equial to this height | 
 **imageFile** | **NSURL***| Image file to perform the operation on.  Common file formats such as PNG, JPEG are supported. | 

### Return type

**NSObject***

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: image/png

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

