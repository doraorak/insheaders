//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef NSNumber_Formatting_h
#define NSNumber_Formatting_h
@import Foundation;

@interface NSNumber (Formatting)
/* instance methods */
- (id)abbreviatedString;
- (id)stringForFollowerCount;
- (id)stringForReminderCount;
- (id)stringForInteractionCount;
- (id)barcelonaAbbreviatedString;
- (id)barcelonaFollowerCount;
- (id)stringForCountVoiceOver;
- (id)stringForViewCount;
- (id)stringForStorySocialContextCount;
- (id)stringForIGTVCardViewCount;
- (id)stringForLiveViewerCount;
- (id)distanceStringForDistance:(double)distance usingFormatString:(id)string fractionDigits:(unsigned long long)digits;
- (id)distanceStringUsingMetricSystem:(BOOL)system;
- (id)distanceString;
- (id)commaSeparatedString;
- (id)formatNumberOfLikes;
- (id)formatBucketedNumberOfLikeCount;
- (id)formatBucketedNumberOfLikeCountUsingLowerCJKAbbrevThreshold;
- (id)formatBucketedNumberOfLikeCountAbbreviatedAsWholeNumbers;
- (id)formatNumberOfPosts;
- (id)formattedNumberString:(long long)string isShortFormat:(BOOL)format isCapitalized:(BOOL)capitalized useThousandThresholdForCJKLocale:(BOOL)cjklocale excludeDecimals:(BOOL)decimals;
- (id)formatNumberOfPublicPosts;
- (id)formatForNumber:(long long)number isShortFormat:(BOOL)format isCapitalized:(BOOL)capitalized useThousandThresholdForCJKLocale:(BOOL)cjklocale;
- (id)shortenedNumberString:(long long)string useThousandThresholdForCJKLocale:(BOOL)cjklocale excludeDecimals:(BOOL)decimals;
- (id)formatNumberOfPostCountUppercase;
@end

#endif /* NSNumber_Formatting_h */
