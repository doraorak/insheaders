//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGResultsFilterListViewModel_h
#define IGResultsFilterListViewModel_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "IGResultsFilterRangeBounds.h"

@class IGResultsFilterListDisabledFilterViewModel, IGUser, NSDictionary, NSString;

@interface IGResultsFilterListViewModel : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  NSString *_listFilter_attributeType;
  NSString *_listFilter_label;
  NSString *_listFilter_selectedLabel;
  long long _listFilter_decoratorType;
  long long _listFilter_maxNumSelections;
  NSDictionary *_listFilterItem_attributes;
  NSString *_listFilterItem_label;
  BOOL _listFilterItem_isSelected;
  long long _listFilterItem_decoratorType;
  long long _listFilterItem_valueType;
  NSString *_listFilterItem_attributeType;
  NSString *_listFilterItem_filterQueryLabel;
  NSDictionary *_listFilterItem_filterSpecificDisplayInfo;
  NSDictionary *_userItem_attributes;
  IGUser *_userItem_user;
  BOOL _userItem_isSelected;
  NSString *_toggleFilter_attributeType;
  NSString *_toggleFilter_label;
  BOOL _toggleFilter_isSelected;
  IGResultsFilterListDisabledFilterViewModel *_disabledFilter;
  NSString *_rangeFilter_attributeType;
  NSString *_rangeFilter_label;
  NSString *_rangeFilter_selectedLabel;
  NSString *_rangeFilter_measurementUnit;
  IGResultsFilterRangeBounds *_rangeFilter_rangeSelected;
  IGResultsFilterRangeBounds *_rangeFilter_rangeBounds;
}

/* class methods */
+ (id)disabledFilter:(id)filter;
+ (id)listFilterItemWithAttributes:(id)attributes label:(id)label isSelected:(BOOL)selected decoratorType:(long long)type valueType:(long long)type attributeType:(id)type filterQueryLabel:(id)label filterSpecificDisplayInfo:(id)info;
+ (id)listFilterWithAttributeType:(id)type label:(id)label selectedLabel:(id)label decoratorType:(long long)type maxNumSelections:(long long)selections;
+ (id)rangeFilterWithAttributeType:(id)type label:(id)label selectedLabel:(id)label measurementUnit:(id)unit rangeSelected:(id)selected rangeBounds:(id)bounds;
+ (id)toggleFilterWithAttributeType:(id)type label:(id)label isSelected:(BOOL)selected;
+ (id)userItemWithAttributes:(id)attributes user:(id)user isSelected:(BOOL)selected;

/* instance methods */
@end

#endif /* IGResultsFilterListViewModel_h */
