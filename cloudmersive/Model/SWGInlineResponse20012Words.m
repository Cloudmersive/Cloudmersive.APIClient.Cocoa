#import "SWGInlineResponse20012Words.h"

@implementation SWGInlineResponse20012Words

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"word": @"Word", @"wordIndex": @"WordIndex", @"startPosition": @"StartPosition", @"endPosition": @"EndPosition" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"word", @"wordIndex", @"startPosition", @"endPosition"];
  return [optionalProperties containsObject:propertyName];
}

@end
