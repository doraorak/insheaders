//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FB_RTCRtpCodecParameters_h
#define FB_RTCRtpCodecParameters_h
@import Foundation;

@class NSDictionary, NSNumber, NSString;
@protocol struct RtpCodecParameters { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char * x0; unsigned long long x1; unsigned int x2 :63; unsigned int x3 :1; } x0; struct __short { char x0[23] unsigned char x1[0] unsigned int x2 :7; unsigned int x3 :1; } x1; struct __raw { unsigned long long x0[3] } x2; } x0; } x0; } x0; } x0; int x1; int x2; struct optional<int> { union { char x0; int x1; } x0; BOOL x1; } x3; struct optional<int> { union { char x0; int x1; } x0; BOOL x1; } x4; struct optional<int> { union { char x0; int x1; } x0; BOOL x1; } x5; struct optional<int> { union { char x0; int x1; } x0; BOOL x1; } x6; struct vector<webrtc_legacy::RtcpFeedback, std::allocator<webrtc_legacy::RtcpFeedback>> { struct RtcpFeedback * x0; struct RtcpFeedback * x1; struct __compressed_pair<webrtc_legacy::RtcpFeedback *, std::allocator<webrtc_legacy::RtcpFeedback>> { struct RtcpFeedback * x0; } x2; } x7; struct map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<const std::string, std::string>>> { struct __tree<std::__value_type<std::string, std::string>, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::string>>> { void * x0; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::string>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void * x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>>> { unsigned long long x0; } x2; } x0; } x8; };

@interface FB_RTCRtpCodecParameters : NSObject

@property (readonly, nonatomic) struct RtpCodecParameters { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char * x0; unsigned long long x1; unsigned int x2 :63; unsigned int x3 :1; } x0; struct __short { char x0[23] unsigned char x1[0] unsigned int x2 :7; unsigned int x3 :1; } x1; struct __raw { unsigned long long x0[3] } x2; } x0; } x0; } x0; } x0; int x1; int x2; struct optional<int> { union { char x0; int x1; } x0; BOOL x1; } x3; struct optional<int> { union { char x0; int x1; } x0; BOOL x1; } x4; struct optional<int> { union { char x0; int x1; } x0; BOOL x1; } x5; struct optional<int> { union { char x0; int x1; } x0; BOOL x1; } x6; struct vector<webrtc_legacy::RtcpFeedback, std::allocator<webrtc_legacy::RtcpFeedback>> { struct RtcpFeedback * x0; struct RtcpFeedback * x1; struct __compressed_pair<webrtc_legacy::RtcpFeedback *, std::allocator<webrtc_legacy::RtcpFeedback>> { struct RtcpFeedback * x0; } x2; } x7; struct map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<const std::string, std::string>>> { struct __tree<std::__value_type<std::string, std::string>, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::string>>> { void * x0; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::string>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void * x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>>> { unsigned long long x0; } x2; } x0; } x8; } nativeParameters;
@property (nonatomic) int payloadType;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *kind;
@property (readonly, nonatomic) NSNumber *clockRate;
@property (readonly, nonatomic) NSNumber *numChannels;
@property (readonly, nonatomic) NSDictionary *parameters;

/* instance methods */
- (id)init;
- (id)initWithNativeParameters:(const void *)parameters;
@end

#endif /* FB_RTCRtpCodecParameters_h */