# SWGWordsApi

All URIs are relative to *https://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**wordsAdjectives**](SWGWordsApi.md#wordsadjectives) | **POST** /nlp/get/words/adjectives/string | Get adjectives in string
[**wordsAdverbs**](SWGWordsApi.md#wordsadverbs) | **POST** /nlp/get/words/adverbs/string | Get adverbs in input string
[**wordsGetWordsJson**](SWGWordsApi.md#wordsgetwordsjson) | **POST** /nlp/get/words/json | Get words in input string (JSON)
[**wordsGetWordsString**](SWGWordsApi.md#wordsgetwordsstring) | **POST** /nlp/get/words/string | Get words from string
[**wordsNouns**](SWGWordsApi.md#wordsnouns) | **POST** /nlp/get/words/nouns/string | Get nouns in string
[**wordsPost**](SWGWordsApi.md#wordspost) | **POST** /nlp/get/words/verbs/string | Get the verbs in a string
[**wordsPronouns**](SWGWordsApi.md#wordspronouns) | **POST** /nlp/get/words/pronouns/string | Returns all pronounts in string
[**wordsProperNouns**](SWGWordsApi.md#wordspropernouns) | **POST** /nlp/get/words/properNouns/string | Get proper nouns in a string


# **wordsAdjectives**
```objc
-(NSURLSessionTask*) wordsAdjectivesWithInput: (NSString*) input
        completionHandler: (void (^)(NSString* output, NSError* error)) handler;
```

Get adjectives in string

Retrieves all adjectives in input string

### Example 
```objc

NSString* input = input_example; // Input string

SWGWordsApi*apiInstance = [[SWGWordsApi alloc] init];

// Get adjectives in string
[apiInstance wordsAdjectivesWithInput:input
          completionHandler: ^(NSString* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGWordsApi->wordsAdjectives: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **input** | **NSString***| Input string | 

### Return type

**NSString***

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json, text/json, application/xml, text/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **wordsAdverbs**
```objc
-(NSURLSessionTask*) wordsAdverbsWithInput: (NSString*) input
        completionHandler: (void (^)(NSString* output, NSError* error)) handler;
```

Get adverbs in input string

Returns all adverb words in the input string

### Example 
```objc

NSString* input = input_example; // Input string

SWGWordsApi*apiInstance = [[SWGWordsApi alloc] init];

// Get adverbs in input string
[apiInstance wordsAdverbsWithInput:input
          completionHandler: ^(NSString* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGWordsApi->wordsAdverbs: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **input** | **NSString***| Input string | 

### Return type

**NSString***

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json, text/json, application/xml, text/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **wordsGetWordsJson**
```objc
-(NSURLSessionTask*) wordsGetWordsJsonWithInput: (NSString*) input
        completionHandler: (void (^)(SWGInlineResponse20012* output, NSError* error)) handler;
```

Get words in input string (JSON)

Get the component words in an input string, formatted as JSON

### Example 
```objc

NSString* input = input_example; // String to process

SWGWordsApi*apiInstance = [[SWGWordsApi alloc] init];

// Get words in input string (JSON)
[apiInstance wordsGetWordsJsonWithInput:input
          completionHandler: ^(SWGInlineResponse20012* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGWordsApi->wordsGetWordsJson: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **input** | **NSString***| String to process | 

### Return type

[**SWGInlineResponse20012***](SWGInlineResponse20012.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json, text/json, application/xml, text/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **wordsGetWordsString**
```objc
-(NSURLSessionTask*) wordsGetWordsStringWithInput: (NSString*) input
        completionHandler: (void (^)(NSString* output, NSError* error)) handler;
```

Get words from string

Segment an input string into its component words

### Example 
```objc

NSString* input = input_example; // Input string

SWGWordsApi*apiInstance = [[SWGWordsApi alloc] init];

// Get words from string
[apiInstance wordsGetWordsStringWithInput:input
          completionHandler: ^(NSString* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGWordsApi->wordsGetWordsString: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **input** | **NSString***| Input string | 

### Return type

**NSString***

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json, text/json, application/xml, text/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **wordsNouns**
```objc
-(NSURLSessionTask*) wordsNounsWithInput: (NSString*) input
        completionHandler: (void (^)(NSString* output, NSError* error)) handler;
```

Get nouns in string

Returns all of the nouns in the input string

### Example 
```objc

NSString* input = input_example; // Input string

SWGWordsApi*apiInstance = [[SWGWordsApi alloc] init];

// Get nouns in string
[apiInstance wordsNounsWithInput:input
          completionHandler: ^(NSString* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGWordsApi->wordsNouns: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **input** | **NSString***| Input string | 

### Return type

**NSString***

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json, text/json, application/xml, text/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **wordsPost**
```objc
-(NSURLSessionTask*) wordsPostWithInput: (NSString*) input
        completionHandler: (void (^)(NSString* output, NSError* error)) handler;
```

Get the verbs in a string

Get all of the verbs in the input string.

### Example 
```objc

NSString* input = input_example; // Input string

SWGWordsApi*apiInstance = [[SWGWordsApi alloc] init];

// Get the verbs in a string
[apiInstance wordsPostWithInput:input
          completionHandler: ^(NSString* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGWordsApi->wordsPost: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **input** | **NSString***| Input string | 

### Return type

**NSString***

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json, text/json, application/xml, text/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **wordsPronouns**
```objc
-(NSURLSessionTask*) wordsPronounsWithInput: (NSString*) input
        completionHandler: (void (^)(NSString* output, NSError* error)) handler;
```

Returns all pronounts in string

Returns all pronouns in the input string

### Example 
```objc

NSString* input = input_example; // Input string

SWGWordsApi*apiInstance = [[SWGWordsApi alloc] init];

// Returns all pronounts in string
[apiInstance wordsPronounsWithInput:input
          completionHandler: ^(NSString* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGWordsApi->wordsPronouns: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **input** | **NSString***| Input string | 

### Return type

**NSString***

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json, text/json, application/xml, text/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **wordsProperNouns**
```objc
-(NSURLSessionTask*) wordsProperNounsWithInput: (NSString*) input
        completionHandler: (void (^)(NSString* output, NSError* error)) handler;
```

Get proper nouns in a string

Returns all of the proper nouns in a string.  Proper nouns are named entities such as \"Hilton\".

### Example 
```objc

NSString* input = input_example; // Input string

SWGWordsApi*apiInstance = [[SWGWordsApi alloc] init];

// Get proper nouns in a string
[apiInstance wordsProperNounsWithInput:input
          completionHandler: ^(NSString* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGWordsApi->wordsProperNouns: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **input** | **NSString***| Input string | 

### Return type

**NSString***

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json, text/json, application/xml, text/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

