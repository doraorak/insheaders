//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef NSDate_RelativeDate_h
#define NSDate_RelativeDate_h
@import Foundation;

@interface NSDate (RelativeDate)
/* instance methods */
- (id)formattedDateRelativeToNow;
- (id)shortenedFormattedDateRelativeToNow;
- (id)partiallyShortenedFormattedDateRelativeToNow;
- (id)shortenedFormattedDateRelativeToNowWithOptions:(unsigned long long)options;
- (id)partiallyShortenedFormattedDateRelativeToNowHideSeconds:(BOOL)seconds options:(unsigned long long)options;
- (id)shortenedFormattedDateRelativeToNowWithFloorDaysWeeks:(BOOL)weeks;
- (id)formattedDateInMixedFormat;
- (id)formattedDateInShortenedMixedFormat;
- (id)formattedDateInCustomMixedFormat;
- (id)formattedDateWithShortenedDayOfWeekFormat;
- (id)formattedDateInLongFormat;
- (id)formattedDateWithWeekdayInLongFormat;
- (id)formattedDateInFullDateFormat;
- (id)formattedTimeForDate;
- (id)formattedDateRelativeToNowHideSeconds:(BOOL)seconds;
- (id)formattedDateRelativeToNowHideSeconds:(BOOL)seconds shouldFloorDaysWeeks:(BOOL)weeks;
- (id)shortenedFormattedDateRelativeToNowHideSeconds:(BOOL)seconds;
- (id)shortenedFormattedDateRelativeToNowHideSeconds:(BOOL)seconds shouldFloorDaysWeeks:(BOOL)weeks;
- (id)shortenedFormattedDateRelativeToNowHideSeconds:(BOOL)seconds shouldFloorDaysWeeks:(BOOL)weeks options:(unsigned long long)options;
- (id)formattedDateRelativeToNowIncludingYearsHideSeconds:(BOOL)seconds;
- (id)formattedDateRelativeToNowIncludingYearsHideSeconds:(BOOL)seconds shouldFloorDaysWeeks:(BOOL)weeks;
- (id)timerStringRelativeToNow;
- (id)_shortenedStringForTimePeriod:(long long)period delta:(long long)delta options:(unsigned long long)options;
- (id)_shortenedStringDefaultForTimePeriod:(long long)period delta:(long long)delta;
- (id)_shortenedStringLocalizationV2ForTimePeriod:(long long)period delta:(long long)delta;
- (id)_partiallyShortenedStringForTimePeriod:(long long)period delta:(long long)delta options:(unsigned long long)options;
- (id)_fullStringForTimePeriod:(long long)period delta:(long long)delta;
- (id)_stringForTimePeriod:(long long)period delta:(long long)delta shorteningMode:(unsigned long long)mode options:(unsigned long long)options;
- (id)_formattedDateRelativeToNowHideSeconds:(BOOL)seconds includeYears:(BOOL)years shorteningMode:(unsigned long long)mode showJustNow:(BOOL)now shouldFloorDaysWeeks:(BOOL)weeks options:(unsigned long long)options;
@end

#endif /* NSDate_RelativeDate_h */
