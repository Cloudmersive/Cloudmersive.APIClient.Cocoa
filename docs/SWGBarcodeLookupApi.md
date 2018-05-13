# SWGBarcodeLookupApi

All URIs are relative to *https://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**barcodeLookupEanLookup**](SWGBarcodeLookupApi.md#barcodelookupeanlookup) | **POST** /barcode/lookup/ean | Lookup a barcode value and return product data


# **barcodeLookupEanLookup**
```objc
-(NSURLSessionTask*) barcodeLookupEanLookupWithValue: (NSString*) value
        completionHandler: (void (^)(SWGInlineResponse20014* output, NSError* error)) handler;
```

Lookup a barcode value and return product data

### Example 
```objc

NSString* value = value_example; // Barcode value

SWGBarcodeLookupApi*apiInstance = [[SWGBarcodeLookupApi alloc] init];

// Lookup a barcode value and return product data
[apiInstance barcodeLookupEanLookupWithValue:value
          completionHandler: ^(SWGInlineResponse20014* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGBarcodeLookupApi->barcodeLookupEanLookup: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **value** | **NSString***| Barcode value | 

### Return type

[**SWGInlineResponse20014***](SWGInlineResponse20014.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json, text/json, application/xml, text/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

