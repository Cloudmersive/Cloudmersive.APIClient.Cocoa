# SWGGenerateBarcodeApi

All URIs are relative to *https://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**generateBarcodeEAN13**](SWGGenerateBarcodeApi.md#generatebarcodeean13) | **POST** /barcode/generate/ean-13 | Validates and generate a EAN-13 barcode as a PNG file, a type of 1D barcode
[**generateBarcodeEAN8**](SWGGenerateBarcodeApi.md#generatebarcodeean8) | **POST** /barcode/generate/ean-8 | Validates and generate a EAN-8 barcode as a PNG file, a type of 1D barcode
[**generateBarcodeQRCode**](SWGGenerateBarcodeApi.md#generatebarcodeqrcode) | **POST** /barcode/generate/qrcode | Generate a QR code barcode as a PNG file, a type of 2D barcode which can encode free-form text information
[**generateBarcodeUPCA**](SWGGenerateBarcodeApi.md#generatebarcodeupca) | **POST** /barcode/generate/upc-a | Validate and generate a UPC-A barcode as a PNG file, a type of 1D barcode
[**generateBarcodeUPCE**](SWGGenerateBarcodeApi.md#generatebarcodeupce) | **POST** /barcode/generate/upc-e | Validates and generate a UPC-E barcode as a PNG file, a type of 1D barcode


# **generateBarcodeEAN13**
```objc
-(NSURLSessionTask*) generateBarcodeEAN13WithValue: (NSString*) value
        completionHandler: (void (^)(NSURL* output, NSError* error)) handler;
```

Validates and generate a EAN-13 barcode as a PNG file, a type of 1D barcode

### Example 
```objc

NSString* value = value_example; // Barcode value to generate from

SWGGenerateBarcodeApi*apiInstance = [[SWGGenerateBarcodeApi alloc] init];

// Validates and generate a EAN-13 barcode as a PNG file, a type of 1D barcode
[apiInstance generateBarcodeEAN13WithValue:value
          completionHandler: ^(NSURL* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGenerateBarcodeApi->generateBarcodeEAN13: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **value** | **NSString***| Barcode value to generate from | 

### Return type

**NSURL***

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: image/png

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **generateBarcodeEAN8**
```objc
-(NSURLSessionTask*) generateBarcodeEAN8WithValue: (NSString*) value
        completionHandler: (void (^)(NSURL* output, NSError* error)) handler;
```

Validates and generate a EAN-8 barcode as a PNG file, a type of 1D barcode

### Example 
```objc

NSString* value = value_example; // Barcode value to generate from

SWGGenerateBarcodeApi*apiInstance = [[SWGGenerateBarcodeApi alloc] init];

// Validates and generate a EAN-8 barcode as a PNG file, a type of 1D barcode
[apiInstance generateBarcodeEAN8WithValue:value
          completionHandler: ^(NSURL* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGenerateBarcodeApi->generateBarcodeEAN8: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **value** | **NSString***| Barcode value to generate from | 

### Return type

**NSURL***

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: image/png

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **generateBarcodeQRCode**
```objc
-(NSURLSessionTask*) generateBarcodeQRCodeWithValue: (NSString*) value
        completionHandler: (void (^)(NSURL* output, NSError* error)) handler;
```

Generate a QR code barcode as a PNG file, a type of 2D barcode which can encode free-form text information

### Example 
```objc

NSString* value = value_example; // QR code text to convert into the QR code barcode

SWGGenerateBarcodeApi*apiInstance = [[SWGGenerateBarcodeApi alloc] init];

// Generate a QR code barcode as a PNG file, a type of 2D barcode which can encode free-form text information
[apiInstance generateBarcodeQRCodeWithValue:value
          completionHandler: ^(NSURL* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGenerateBarcodeApi->generateBarcodeQRCode: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **value** | **NSString***| QR code text to convert into the QR code barcode | 

### Return type

**NSURL***

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: image/png

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **generateBarcodeUPCA**
```objc
-(NSURLSessionTask*) generateBarcodeUPCAWithValue: (NSString*) value
        completionHandler: (void (^)(NSURL* output, NSError* error)) handler;
```

Validate and generate a UPC-A barcode as a PNG file, a type of 1D barcode

### Example 
```objc

NSString* value = value_example; // UPC-A barcode value to generate from

SWGGenerateBarcodeApi*apiInstance = [[SWGGenerateBarcodeApi alloc] init];

// Validate and generate a UPC-A barcode as a PNG file, a type of 1D barcode
[apiInstance generateBarcodeUPCAWithValue:value
          completionHandler: ^(NSURL* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGenerateBarcodeApi->generateBarcodeUPCA: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **value** | **NSString***| UPC-A barcode value to generate from | 

### Return type

**NSURL***

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: image/png

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **generateBarcodeUPCE**
```objc
-(NSURLSessionTask*) generateBarcodeUPCEWithValue: (NSString*) value
        completionHandler: (void (^)(NSURL* output, NSError* error)) handler;
```

Validates and generate a UPC-E barcode as a PNG file, a type of 1D barcode

### Example 
```objc

NSString* value = value_example; // UPC-E barcode value to generate from

SWGGenerateBarcodeApi*apiInstance = [[SWGGenerateBarcodeApi alloc] init];

// Validates and generate a UPC-E barcode as a PNG file, a type of 1D barcode
[apiInstance generateBarcodeUPCEWithValue:value
          completionHandler: ^(NSURL* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGenerateBarcodeApi->generateBarcodeUPCE: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **value** | **NSString***| UPC-E barcode value to generate from | 

### Return type

**NSURL***

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: image/png

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

