# SWGConvertWebApi

All URIs are relative to *https://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**convertWebHtmlToPdf**](SWGConvertWebApi.md#convertwebhtmltopdf) | **POST** /convert/web/html/to/pdf | Convert HTML string to PDF
[**convertWebUrlToPdf**](SWGConvertWebApi.md#convertweburltopdf) | **POST** /convert/web/url/to/pdf | Convert a URL to PDF
[**convertWebUrlToScreenshot**](SWGConvertWebApi.md#convertweburltoscreenshot) | **POST** /convert/web/url/to/screenshot | Take screenshot of URL


# **convertWebHtmlToPdf**
```objc
-(NSURLSessionTask*) convertWebHtmlToPdfWithInput: (SWGInput3*) input
        completionHandler: (void (^)(NSObject* output, NSError* error)) handler;
```

Convert HTML string to PDF

Fully renders a website and returns a PDF of the HTML.  Javascript, HTML5, CSS and other advanced features are all supported.

### Example 
```objc

SWGInput3* input = [[SWGInput3 alloc] init]; // HTML to PDF request parameters

SWGConvertWebApi*apiInstance = [[SWGConvertWebApi alloc] init];

// Convert HTML string to PDF
[apiInstance convertWebHtmlToPdfWithInput:input
          completionHandler: ^(NSObject* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGConvertWebApi->convertWebHtmlToPdf: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **input** | [**SWGInput3***](SWGInput3.md)| HTML to PDF request parameters | 

### Return type

**NSObject***

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/pdf

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **convertWebUrlToPdf**
```objc
-(NSURLSessionTask*) convertWebUrlToPdfWithInput: (SWGInput2*) input
        completionHandler: (void (^)(NSURL* output, NSError* error)) handler;
```

Convert a URL to PDF

Fully renders a website and returns a PDF of the full page.  Javascript, HTML5, CSS and other advanced features are all supported.

### Example 
```objc

SWGInput2* input = [[SWGInput2 alloc] init]; // URL to PDF request parameters

SWGConvertWebApi*apiInstance = [[SWGConvertWebApi alloc] init];

// Convert a URL to PDF
[apiInstance convertWebUrlToPdfWithInput:input
          completionHandler: ^(NSURL* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGConvertWebApi->convertWebUrlToPdf: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **input** | [**SWGInput2***](SWGInput2.md)| URL to PDF request parameters | 

### Return type

**NSURL***

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/pdf

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **convertWebUrlToScreenshot**
```objc
-(NSURLSessionTask*) convertWebUrlToScreenshotWithInput: (SWGInput1*) input
        completionHandler: (void (^)(NSURL* output, NSError* error)) handler;
```

Take screenshot of URL

Fully renders a website and returns a PNG screenshot of the full page image.  Javascript, HTML5, CSS and other advanced features are all supported.

### Example 
```objc

SWGInput1* input = [[SWGInput1 alloc] init]; // Screenshot request parameters

SWGConvertWebApi*apiInstance = [[SWGConvertWebApi alloc] init];

// Take screenshot of URL
[apiInstance convertWebUrlToScreenshotWithInput:input
          completionHandler: ^(NSURL* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGConvertWebApi->convertWebUrlToScreenshot: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **input** | [**SWGInput1***](SWGInput1.md)| Screenshot request parameters | 

### Return type

**NSURL***

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: image/png

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

