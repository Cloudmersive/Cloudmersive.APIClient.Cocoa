# SWGConvertDataApi

All URIs are relative to *https://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**convertDataCsvToJson**](SWGConvertDataApi.md#convertdatacsvtojson) | **POST** /convert/csv/to/json | CSV to JSON conversion
[**convertDataXmlToJson**](SWGConvertDataApi.md#convertdataxmltojson) | **POST** /convert/xml/to/json | XML to JSON conversion


# **convertDataCsvToJson**
```objc
-(NSURLSessionTask*) convertDataCsvToJsonWithInputFile: (NSURL*) inputFile
        completionHandler: (void (^)(NSObject* output, NSError* error)) handler;
```

CSV to JSON conversion

Convert a CSV file to a JSON object array

### Example 
```objc

NSURL* inputFile = [NSURL fileURLWithPath:@"/path/to/file.txt"]; // Input file to perform the operation on.

SWGConvertDataApi*apiInstance = [[SWGConvertDataApi alloc] init];

// CSV to JSON conversion
[apiInstance convertDataCsvToJsonWithInputFile:inputFile
          completionHandler: ^(NSObject* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGConvertDataApi->convertDataCsvToJson: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inputFile** | **NSURL***| Input file to perform the operation on. | 

### Return type

**NSObject***

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json, text/json, application/xml, text/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **convertDataXmlToJson**
```objc
-(NSURLSessionTask*) convertDataXmlToJsonWithCompletionHandler: 
        (void (^)(NSObject* output, NSError* error)) handler;
```

XML to JSON conversion

Convert an XML string or file into JSON

### Example 
```objc


SWGConvertDataApi*apiInstance = [[SWGConvertDataApi alloc] init];

// XML to JSON conversion
[apiInstance convertDataXmlToJsonWithCompletionHandler: 
          ^(NSObject* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGConvertDataApi->convertDataXmlToJson: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

**NSObject***

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, text/json, application/xml, text/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

