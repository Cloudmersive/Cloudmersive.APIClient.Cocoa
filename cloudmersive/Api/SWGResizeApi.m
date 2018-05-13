#import "SWGResizeApi.h"
#import "SWGQueryParamCollection.h"
#import "SWGApiClient.h"


@interface SWGResizeApi ()

@property (nonatomic, strong, readwrite) NSMutableDictionary *mutableDefaultHeaders;

@end

@implementation SWGResizeApi

NSString* kSWGResizeApiErrorDomain = @"SWGResizeApiErrorDomain";
NSInteger kSWGResizeApiMissingParamErrorCode = 234513;

@synthesize apiClient = _apiClient;

#pragma mark - Initialize methods

- (instancetype) init {
    return [self initWithApiClient:[SWGApiClient sharedClient]];
}


-(instancetype) initWithApiClient:(SWGApiClient *)apiClient {
    self = [super init];
    if (self) {
        _apiClient = apiClient;
        _mutableDefaultHeaders = [NSMutableDictionary dictionary];
    }
    return self;
}

#pragma mark -

-(NSString*) defaultHeaderForKey:(NSString*)key {
    return self.mutableDefaultHeaders[key];
}

-(void) setDefaultHeaderValue:(NSString*) value forKey:(NSString*)key {
    [self.mutableDefaultHeaders setValue:value forKey:key];
}

-(NSDictionary *)defaultHeaders {
    return self.mutableDefaultHeaders;
}

#pragma mark - Api Methods

///
/// Resize an image with parameters
/// Resize an image to a maximum width and maximum height, while preserving the image's original aspect ratio
///  @param maxWidth Maximum width of the output image - final image will be as large as possible while less than or equial to this width 
///
///  @param maxHeight Maximum height of the output image - final image will be as large as possible while less than or equial to this height 
///
///  @param imageFile Image file to perform the operation on.  Common file formats such as PNG, JPEG are supported. 
///
///  @returns NSObject*
///
-(NSURLSessionTask*) resizePostWithMaxWidth: (NSNumber*) maxWidth
    maxHeight: (NSNumber*) maxHeight
    imageFile: (NSURL*) imageFile
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler {
    // verify the required parameter 'maxWidth' is set
    if (maxWidth == nil) {
        NSParameterAssert(maxWidth);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"maxWidth"] };
            NSError* error = [NSError errorWithDomain:kSWGResizeApiErrorDomain code:kSWGResizeApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    // verify the required parameter 'maxHeight' is set
    if (maxHeight == nil) {
        NSParameterAssert(maxHeight);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"maxHeight"] };
            NSError* error = [NSError errorWithDomain:kSWGResizeApiErrorDomain code:kSWGResizeApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    // verify the required parameter 'imageFile' is set
    if (imageFile == nil) {
        NSParameterAssert(imageFile);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"imageFile"] };
            NSError* error = [NSError errorWithDomain:kSWGResizeApiErrorDomain code:kSWGResizeApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/image/resize/preserveAspectRatio/{maxWidth}/{maxHeight}"];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (maxWidth != nil) {
        pathParams[@"maxWidth"] = maxWidth;
    }
    if (maxHeight != nil) {
        pathParams[@"maxHeight"] = maxHeight;
    }

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary* headerParams = [NSMutableDictionary dictionaryWithDictionary:self.apiClient.configuration.defaultHeaders];
    [headerParams addEntriesFromDictionary:self.defaultHeaders];
    // HTTP header `Accept`
    NSString *acceptHeader = [self.apiClient.sanitizer selectHeaderAccept:@[@"image/png"]];
    if(acceptHeader.length > 0) {
        headerParams[@"Accept"] = acceptHeader;
    }

    // response content type
    NSString *responseContentType = [[acceptHeader componentsSeparatedByString:@", "] firstObject] ?: @"";

    // request content type
    NSString *requestContentType = [self.apiClient.sanitizer selectHeaderContentType:@[@"multipart/form-data"]];

    // Authentication setting
    NSArray *authSettings = @[];

    id bodyParam = nil;
    NSMutableDictionary *formParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *localVarFiles = [[NSMutableDictionary alloc] init];
    localVarFiles[@"imageFile"] = imageFile;

    return [self.apiClient requestWithPath: resourcePath
                                    method: @"POST"
                                pathParams: pathParams
                               queryParams: queryParams
                                formParams: formParams
                                     files: localVarFiles
                                      body: bodyParam
                              headerParams: headerParams
                              authSettings: authSettings
                        requestContentType: requestContentType
                       responseContentType: responseContentType
                              responseType: @"NSObject*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((NSObject*)data, error);
                                }
                            }];
}



@end
