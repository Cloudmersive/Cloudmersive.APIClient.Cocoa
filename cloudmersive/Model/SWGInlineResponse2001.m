#import "SWGInlineResponse2001.h"

@implementation SWGInlineResponse2001

- (instancetype)init {
  self = [super init];
  if (self) {
    // initialize property's default value, if any
    
  }
  return self;
}


/**
 * Maps json key to property name.
 * This method is used by `JSONModel`.
 */
+ (JSONKeyMapper *)keyMapper {
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"validDomain": @"ValidDomain", @"whoisServer": @"WhoisServer", @"rawTextRecord": @"RawTextRecord", @"createdDt": @"CreatedDt" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"validDomain", @"whoisServer", @"rawTextRecord", @"createdDt"];
  return [optionalProperties containsObject:propertyName];
}

@end
