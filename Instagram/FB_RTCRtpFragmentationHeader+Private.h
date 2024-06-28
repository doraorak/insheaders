//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FB_RTCRtpFragmentationHeader_Private_h
#define FB_RTCRtpFragmentationHeader_Private_h
@import Foundation;

@interface FB_RTCRtpFragmentationHeader (Private)
/* instance methods */
- (id)initWithNativeFragmentationHeader:(const struct RTPFragmentationHeader *)header;
- (struct unique_ptr<webrtc_legacy::RTPFragmentationHeader, std::default_delete<webrtc_legacy::RTPFragmentationHeader>> { struct __compressed_pair<webrtc_legacy::RTPFragmentationHeader *, std::default_delete<webrtc_legacy::RTPFragmentationHeader>> { struct RTPFragmentationHeader * x0; } x0; })createNativeFragmentationHeader;
@end

#endif /* FB_RTCRtpFragmentationHeader_Private_h */
