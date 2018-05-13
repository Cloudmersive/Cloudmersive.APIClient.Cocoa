# SWGConvertTemplateApi

All URIs are relative to *https://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**convertTemplateApplyHtmlTemplate**](SWGConvertTemplateApi.md#converttemplateapplyhtmltemplate) | **POST** /convert/template/html/apply | Apply HTML template


# **convertTemplateApplyHtmlTemplate**
```objc
-(NSURLSessionTask*) convertTemplateApplyHtmlTemplateWithValue: (SWGValue*) value
        completionHandler: (void (^)(SWGInlineResponse20018* output, NSError* error)) handler;
```

Apply HTML template

Apply operations to fill in an HTML template, generating a final HTML result

### Example 
```objc

SWGValue* value = [[SWGValue alloc] init]; // Operations to apply to template

SWGConvertTemplateApi*apiInstance = [[SWGConvertTemplateApi alloc] init];

// Apply HTML template
[apiInstance convertTemplateApplyHtmlTemplateWithValue:value
          completionHandler: ^(SWGInlineResponse20018* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGConvertTemplateApi->convertTemplateApplyHtmlTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **value** | [**SWGValue***](SWGValue.md)| Operations to apply to template | 

### Return type

[**SWGInlineResponse20018***](SWGInlineResponse20018.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json, text/json, application/xml, text/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

