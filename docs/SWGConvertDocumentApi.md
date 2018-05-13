# SWGConvertDocumentApi

All URIs are relative to *https://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**convertDocumentAutodetectToPdf**](SWGConvertDocumentApi.md#convertdocumentautodetecttopdf) | **POST** /convert/autodetect/to/pdf | Convert Document to PDF
[**convertDocumentDocxToPdf**](SWGConvertDocumentApi.md#convertdocumentdocxtopdf) | **POST** /convert/docx/to/pdf | Word DOCX to PDF
[**convertDocumentPptxToPdf**](SWGConvertDocumentApi.md#convertdocumentpptxtopdf) | **POST** /convert/pptx/to/pdf | PowerPoint PPTX to PDF
[**convertDocumentXlsxToCsv**](SWGConvertDocumentApi.md#convertdocumentxlsxtocsv) | **POST** /convert/xlsx/to/csv | Excel XLSX to CSV
[**convertDocumentXlsxToPdf**](SWGConvertDocumentApi.md#convertdocumentxlsxtopdf) | **POST** /convert/xlsx/to/pdf | Excel XLSX to PDF


# **convertDocumentAutodetectToPdf**
```objc
-(NSURLSessionTask*) convertDocumentAutodetectToPdfWithInputFile: (NSURL*) inputFile
        completionHandler: (void (^)(NSURL* output, NSError* error)) handler;
```

Convert Document to PDF

Automatically detect file type and convert it to PDF.

### Example 
```objc

NSURL* inputFile = [NSURL fileURLWithPath:@"/path/to/file.txt"]; // Input file to perform the operation on.

SWGConvertDocumentApi*apiInstance = [[SWGConvertDocumentApi alloc] init];

// Convert Document to PDF
[apiInstance convertDocumentAutodetectToPdfWithInputFile:inputFile
          completionHandler: ^(NSURL* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGConvertDocumentApi->convertDocumentAutodetectToPdf: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inputFile** | **NSURL***| Input file to perform the operation on. | 

### Return type

**NSURL***

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/pdf

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **convertDocumentDocxToPdf**
```objc
-(NSURLSessionTask*) convertDocumentDocxToPdfWithInputFile: (NSURL*) inputFile
        completionHandler: (void (^)(NSURL* output, NSError* error)) handler;
```

Word DOCX to PDF

Convert Office Word Documents (docx) to standard PDF

### Example 
```objc

NSURL* inputFile = [NSURL fileURLWithPath:@"/path/to/file.txt"]; // Input file to perform the operation on.

SWGConvertDocumentApi*apiInstance = [[SWGConvertDocumentApi alloc] init];

// Word DOCX to PDF
[apiInstance convertDocumentDocxToPdfWithInputFile:inputFile
          completionHandler: ^(NSURL* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGConvertDocumentApi->convertDocumentDocxToPdf: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inputFile** | **NSURL***| Input file to perform the operation on. | 

### Return type

**NSURL***

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/pdf

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **convertDocumentPptxToPdf**
```objc
-(NSURLSessionTask*) convertDocumentPptxToPdfWithInputFile: (NSURL*) inputFile
        completionHandler: (void (^)(NSURL* output, NSError* error)) handler;
```

PowerPoint PPTX to PDF

Convert Office PowerPoint Documents (pptx) to standard PDF

### Example 
```objc

NSURL* inputFile = [NSURL fileURLWithPath:@"/path/to/file.txt"]; // Input file to perform the operation on.

SWGConvertDocumentApi*apiInstance = [[SWGConvertDocumentApi alloc] init];

// PowerPoint PPTX to PDF
[apiInstance convertDocumentPptxToPdfWithInputFile:inputFile
          completionHandler: ^(NSURL* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGConvertDocumentApi->convertDocumentPptxToPdf: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inputFile** | **NSURL***| Input file to perform the operation on. | 

### Return type

**NSURL***

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/pdf

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **convertDocumentXlsxToCsv**
```objc
-(NSURLSessionTask*) convertDocumentXlsxToCsvWithInputFile: (NSURL*) inputFile
        completionHandler: (void (^)(NSURL* output, NSError* error)) handler;
```

Excel XLSX to CSV

Convert Office Excel Workbooks (xlsx) to standard Comma-Separated Values (CSV) format.

### Example 
```objc

NSURL* inputFile = [NSURL fileURLWithPath:@"/path/to/file.txt"]; // Input file to perform the operation on.

SWGConvertDocumentApi*apiInstance = [[SWGConvertDocumentApi alloc] init];

// Excel XLSX to CSV
[apiInstance convertDocumentXlsxToCsvWithInputFile:inputFile
          completionHandler: ^(NSURL* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGConvertDocumentApi->convertDocumentXlsxToCsv: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inputFile** | **NSURL***| Input file to perform the operation on. | 

### Return type

**NSURL***

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/csv

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **convertDocumentXlsxToPdf**
```objc
-(NSURLSessionTask*) convertDocumentXlsxToPdfWithInputFile: (NSURL*) inputFile
        completionHandler: (void (^)(NSURL* output, NSError* error)) handler;
```

Excel XLSX to PDF

Convert Office Excel Workbooks (xlsx) to standard PDF.  Converts all worksheets in the workbook to PDF.

### Example 
```objc

NSURL* inputFile = [NSURL fileURLWithPath:@"/path/to/file.txt"]; // Input file to perform the operation on.

SWGConvertDocumentApi*apiInstance = [[SWGConvertDocumentApi alloc] init];

// Excel XLSX to PDF
[apiInstance convertDocumentXlsxToPdfWithInputFile:inputFile
          completionHandler: ^(NSURL* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGConvertDocumentApi->convertDocumentXlsxToPdf: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inputFile** | **NSURL***| Input file to perform the operation on. | 

### Return type

**NSURL***

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/pdf

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

