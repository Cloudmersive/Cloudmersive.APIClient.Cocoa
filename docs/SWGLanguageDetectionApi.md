# SWGLanguageDetectionApi

All URIs are relative to *https://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**languageDetectionPost**](SWGLanguageDetectionApi.md#languagedetectionpost) | **POST** /nlp/language/detect | Detect language of text


# **languageDetectionPost**
```objc
-(NSURLSessionTask*) languageDetectionPostWithTextToDetect: (NSString*) textToDetect
        completionHandler: (void (^)(SWGInlineResponse2007* output, NSError* error)) handler;
```

Detect language of text

Automatically determine which language a text string is written in.  Supports Danish (DAN), German (DEU), English (ENG), French (FRA), Italian (ITA), Japanese (JPN), Korean (KOR), Dutch (NLD), Norwegian (NOR), Portuguese (POR), Russian (RUS), Spanish (SPA), Swedish (SWE), Chinese (ZHO).

### Example 
```objc

NSString* textToDetect = textToDetect_example; // Text to detect language of

SWGLanguageDetectionApi*apiInstance = [[SWGLanguageDetectionApi alloc] init];

// Detect language of text
[apiInstance languageDetectionPostWithTextToDetect:textToDetect
          completionHandler: ^(SWGInlineResponse2007* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGLanguageDetectionApi->languageDetectionPost: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **textToDetect** | **NSString***| Text to detect language of | 

### Return type

[**SWGInlineResponse2007***](SWGInlineResponse2007.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json, text/json, application/xml, text/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

