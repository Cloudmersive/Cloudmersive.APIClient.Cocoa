# SWGFaceApi

All URIs are relative to *https://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**faceCropFirst**](SWGFaceApi.md#facecropfirst) | **POST** /image/face/crop/first | Crop image to face (square)
[**faceCropFirstRound**](SWGFaceApi.md#facecropfirstround) | **POST** /image/face/crop/first/round | Crop image to face (round)
[**faceLocate**](SWGFaceApi.md#facelocate) | **POST** /image/face/locate | Find faces in an image


# **faceCropFirst**
```objc
-(NSURLSessionTask*) faceCropFirstWithImageFile: (NSURL*) imageFile
        completionHandler: (void (^)(NSURL* output, NSError* error)) handler;
```

Crop image to face (square)

Crop an image to the face (rectangular crop).  If there is more than one face present, choose the first one.

### Example 
```objc

NSURL* imageFile = [NSURL fileURLWithPath:@"/path/to/file.txt"]; // Image file to perform the operation on.  Common file formats such as PNG, JPEG are supported.

SWGFaceApi*apiInstance = [[SWGFaceApi alloc] init];

// Crop image to face (square)
[apiInstance faceCropFirstWithImageFile:imageFile
          completionHandler: ^(NSURL* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGFaceApi->faceCropFirst: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **imageFile** | **NSURL***| Image file to perform the operation on.  Common file formats such as PNG, JPEG are supported. | 

### Return type

**NSURL***

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/octet-stream

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **faceCropFirstRound**
```objc
-(NSURLSessionTask*) faceCropFirstRoundWithImageFile: (NSURL*) imageFile
        completionHandler: (void (^)(NSURL* output, NSError* error)) handler;
```

Crop image to face (round)

Crop an image to the face (circular/round crop).  If there is more than one face present, choose the first one.

### Example 
```objc

NSURL* imageFile = [NSURL fileURLWithPath:@"/path/to/file.txt"]; // Image file to perform the operation on.  Common file formats such as PNG, JPEG are supported.

SWGFaceApi*apiInstance = [[SWGFaceApi alloc] init];

// Crop image to face (round)
[apiInstance faceCropFirstRoundWithImageFile:imageFile
          completionHandler: ^(NSURL* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGFaceApi->faceCropFirstRound: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **imageFile** | **NSURL***| Image file to perform the operation on.  Common file formats such as PNG, JPEG are supported. | 

### Return type

**NSURL***

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/octet-stream

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **faceLocate**
```objc
-(NSURLSessionTask*) faceLocateWithImageFile: (NSURL*) imageFile
        completionHandler: (void (^)(SWGInlineResponse20015* output, NSError* error)) handler;
```

Find faces in an image

Locate the positions of all faces in an image

### Example 
```objc

NSURL* imageFile = [NSURL fileURLWithPath:@"/path/to/file.txt"]; // Image file to perform the operation on.  Common file formats such as PNG, JPEG are supported.

SWGFaceApi*apiInstance = [[SWGFaceApi alloc] init];

// Find faces in an image
[apiInstance faceLocateWithImageFile:imageFile
          completionHandler: ^(SWGInlineResponse20015* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGFaceApi->faceLocate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **imageFile** | **NSURL***| Image file to perform the operation on.  Common file formats such as PNG, JPEG are supported. | 

### Return type

[**SWGInlineResponse20015***](SWGInlineResponse20015.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json, text/json, application/xml, text/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

