# SWGSpellCheckApi

All URIs are relative to *https://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**spellCheckCheckJson**](SWGSpellCheckApi.md#spellcheckcheckjson) | **POST** /nlp/spellcheck/check/word/json | Spell check word
[**spellCheckCheckSentenceJson**](SWGSpellCheckApi.md#spellcheckchecksentencejson) | **POST** /nlp/spellcheck/check/sentence/json | Check if sentence is spelled correctly
[**spellCheckCheckSentenceString**](SWGSpellCheckApi.md#spellcheckchecksentencestring) | **POST** /nlp/spellcheck/check/sentence/string | Spell check a sentence
[**spellCheckCorrect**](SWGSpellCheckApi.md#spellcheckcorrect) | **POST** /nlp/spellcheck/correct/word/string | Find spelling corrections
[**spellCheckCorrectJson**](SWGSpellCheckApi.md#spellcheckcorrectjson) | **POST** /nlp/spellcheck/correct/word/json | Find spelling corrections
[**spellCheckPost**](SWGSpellCheckApi.md#spellcheckpost) | **POST** /nlp/spellcheck/check/word/string | Spell check a word


# **spellCheckCheckJson**
```objc
-(NSURLSessionTask*) spellCheckCheckJsonWithValue: (NSString*) value
        completionHandler: (void (^)(SWGInlineResponse20010* output, NSError* error)) handler;
```

Spell check word

Spell check a word as JSON

### Example 
```objc

NSString* value = value_example; // Input sentence

SWGSpellCheckApi*apiInstance = [[SWGSpellCheckApi alloc] init];

// Spell check word
[apiInstance spellCheckCheckJsonWithValue:value
          completionHandler: ^(SWGInlineResponse20010* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGSpellCheckApi->spellCheckCheckJson: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **value** | **NSString***| Input sentence | 

### Return type

[**SWGInlineResponse20010***](SWGInlineResponse20010.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json, text/json, application/xml, text/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **spellCheckCheckSentenceJson**
```objc
-(NSURLSessionTask*) spellCheckCheckSentenceJsonWithValue: (NSString*) value
        completionHandler: (void (^)(SWGInlineResponse2009* output, NSError* error)) handler;
```

Check if sentence is spelled correctly

Checks whether the sentence is spelled correctly and returns the result as JSON

### Example 
```objc

NSString* value = value_example; // Input sentence

SWGSpellCheckApi*apiInstance = [[SWGSpellCheckApi alloc] init];

// Check if sentence is spelled correctly
[apiInstance spellCheckCheckSentenceJsonWithValue:value
          completionHandler: ^(SWGInlineResponse2009* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGSpellCheckApi->spellCheckCheckSentenceJson: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **value** | **NSString***| Input sentence | 

### Return type

[**SWGInlineResponse2009***](SWGInlineResponse2009.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json, text/json, application/xml, text/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **spellCheckCheckSentenceString**
```objc
-(NSURLSessionTask*) spellCheckCheckSentenceStringWithValue: (NSString*) value
        completionHandler: (void (^)(NSNumber* output, NSError* error)) handler;
```

Spell check a sentence

Check if a sentence is spelled correctly

### Example 
```objc

NSString* value = value_example; // Input sentence word

SWGSpellCheckApi*apiInstance = [[SWGSpellCheckApi alloc] init];

// Spell check a sentence
[apiInstance spellCheckCheckSentenceStringWithValue:value
          completionHandler: ^(NSNumber* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGSpellCheckApi->spellCheckCheckSentenceString: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **value** | **NSString***| Input sentence word | 

### Return type

**NSNumber***

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json, text/json, application/xml, text/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **spellCheckCorrect**
```objc
-(NSURLSessionTask*) spellCheckCorrectWithValue: (NSString*) value
        completionHandler: (void (^)(NSString* output, NSError* error)) handler;
```

Find spelling corrections

Find the spelling corrections for a word

### Example 
```objc

NSString* value = value_example; // Input word

SWGSpellCheckApi*apiInstance = [[SWGSpellCheckApi alloc] init];

// Find spelling corrections
[apiInstance spellCheckCorrectWithValue:value
          completionHandler: ^(NSString* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGSpellCheckApi->spellCheckCorrect: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **value** | **NSString***| Input word | 

### Return type

**NSString***

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json, text/json, application/xml, text/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **spellCheckCorrectJson**
```objc
-(NSURLSessionTask*) spellCheckCorrectJsonWithValue: (NSString*) value
        completionHandler: (void (^)(SWGInlineResponse20011* output, NSError* error)) handler;
```

Find spelling corrections

Find spelling correction suggestions and return result as JSON

### Example 
```objc

NSString* value = value_example; // Input string

SWGSpellCheckApi*apiInstance = [[SWGSpellCheckApi alloc] init];

// Find spelling corrections
[apiInstance spellCheckCorrectJsonWithValue:value
          completionHandler: ^(SWGInlineResponse20011* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGSpellCheckApi->spellCheckCorrectJson: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **value** | **NSString***| Input string | 

### Return type

[**SWGInlineResponse20011***](SWGInlineResponse20011.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json, text/json, application/xml, text/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **spellCheckPost**
```objc
-(NSURLSessionTask*) spellCheckPostWithValue: (NSString*) value
        completionHandler: (void (^)(NSNumber* output, NSError* error)) handler;
```

Spell check a word

Check if a word is spelled correctly

### Example 
```objc

NSString* value = value_example; // Input string word

SWGSpellCheckApi*apiInstance = [[SWGSpellCheckApi alloc] init];

// Spell check a word
[apiInstance spellCheckPostWithValue:value
          completionHandler: ^(NSNumber* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGSpellCheckApi->spellCheckPost: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **value** | **NSString***| Input string word | 

### Return type

**NSNumber***

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, text/json, application/xml, text/xml, application/x-www-form-urlencoded
 - **Accept**: application/json, text/json, application/xml, text/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

