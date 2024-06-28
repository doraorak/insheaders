//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPolicyZone_h
#define FBPolicyZone_h
@import Foundation;

@interface FBPolicyZone : NSObject
/* class methods */
+ (BOOL)flowsFrom:(id)from to:(id)to error:(id *)error;
+ (BOOL)flowsFrom:(id)from to:(id)to error:(id *)error asidFrom:(id)from asidTo:(id)to;
+ (id)unzoneZonedValue:(id)value reason:(unsigned long long)reason;
+ (id)unzoneZonedValue:(id)value reason:(unsigned long long)reason asid:(id)asid;
+ (id)unzoneNullableZonedValue:(id)value reason:(unsigned long long)reason;
+ (id)unzoneNullableZonedValue:(id)value reason:(unsigned long long)reason asid:(id)asid;
+ (id)unwrapZonedValue:(id)value privacyContext:(id)context error:(id *)error;
+ (id)unwrapZonedValue:(id)value privacyContext:(id)context error:(id *)error asid:(id)asid;
+ (id)reclassifyZonedValue:(id)value policy:(id)policy reason:(unsigned long long)reason;
+ (id)reclassifyZonedValue:(id)value policy:(id)policy reason:(unsigned long long)reason asid:(id)asid;
+ (id)runWithContext:(id)context policy:(id)policy block:(id /* block */)block error:(id *)error;
+ (id)runWithContext:(id)context policy:(id)policy block:(id /* block */)block error:(id *)error asid:(id)asid;
+ (id)runAndUnzoneWithContext:(id)context policy:(id)policy block:(id /* block */)block error:(id *)error reason:(unsigned long long)reason;
+ (id)runAndUnzoneWithContext:(id)context policy:(id)policy block:(id /* block */)block error:(id *)error reason:(unsigned long long)reason asid:(id)asid;
@end

#endif /* FBPolicyZone_h */