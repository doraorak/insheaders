//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef GPBFieldDescriptor_h
#define GPBFieldDescriptor_h
@import Foundation;

#include "GPBEnumDescriptor.h"
#include "GPBOneofDescriptor.h"

@class NSString;

@interface GPBFieldDescriptor : NSObject {
  /* instance variables */
  struct GPBMessageFieldDescription * description_;
  GPBOneofDescriptor *containingOneof_;
  SEL getSel_;
  SEL setSel_;
  SEL hasOrCountSel_;
  SEL setHasSel_;
  union { BOOL valueBool; int valueInt32; long long valueInt64; unsigned int valueUInt32; unsigned long long valueUInt64; float valueFloat; double valueDouble; NSData *valueData; NSString *valueString; GPBMessage *valueMessage; int valueEnum; } defaultValue_;
  Class msgClass_;
  union { GPBEnumDescriptor *enumDescriptor_; undefined *enumVerifier_; } enumHandling_;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int number;
@property (readonly, nonatomic) unsigned char dataType;
@property (readonly, nonatomic) BOOL hasDefaultValue;
@property (readonly, nonatomic) union { BOOL x0; int x1; long long x2; unsigned int x3; unsigned long long x4; float x5; double x6; id x7; id x8; id x9; int x10; } defaultValue;
@property (readonly, nonatomic) BOOL required;
@property (readonly, nonatomic) BOOL optional;
@property (readonly, nonatomic) unsigned char fieldType;
@property (readonly, nonatomic) unsigned char mapKeyDataType;
@property (readonly, nonatomic) BOOL packable;
@property (readonly, nonatomic) GPBOneofDescriptor *containingOneof;
@property (readonly, nonatomic) Class msgClass;
@property (readonly, nonatomic) GPBEnumDescriptor *enumDescriptor;

/* instance methods */
- (id)init;
- (id)initWithFieldDescription:(void *)description includesDefault:(BOOL)default usesClassRefs:(BOOL)refs proto3OptionalKnown:(BOOL)known syntax:(unsigned char)syntax;
- (void)dealloc;
- (BOOL)isRequired;
- (BOOL)isOptional;
- (BOOL)isPackable;
- (BOOL)isValidEnumValue:(int)value;
- (id)textFormatName;
@end

#endif /* GPBFieldDescriptor_h */
