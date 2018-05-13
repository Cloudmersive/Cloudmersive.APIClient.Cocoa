# SWGScanApi

All URIs are relative to *https://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**scanFile**](SWGScanApi.md#scanfile) | **POST** /virus/scan/file | Scan a file for viruses


# **scanFile**
```objc
-(NSURLSessionTask*) scanFileWithInputFile: (NSURL*) inputFile
        completionHandler: (void (^)(SWGInlineResponse20019* output, NSError* error)) handler;
```

Scan a file for viruses

### Example 
```objc

NSURL* inputFile = [NSURL fileURLWithPath:@"/path/to/file.txt"]; // Input file to perform the operation on.

SWGScanApi*apiInstance = [[SWGScanApi alloc] init];

// Scan a file for viruses
[apiInstance scanFileWithInputFile:inputFile
          completionHandler: ^(SWGInlineResponse20019* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGScanApi->scanFile: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inputFile** | **NSURL***| Input file to perform the operation on. | 

### Return type

[**SWGInlineResponse20019***](SWGInlineResponse20019.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json, text/json, application/xml, text/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

