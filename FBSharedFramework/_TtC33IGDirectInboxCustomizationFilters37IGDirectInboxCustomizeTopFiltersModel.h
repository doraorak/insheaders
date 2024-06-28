//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC33IGDirectInboxCustomizationFilters37IGDirectInboxCustomizeTopFiltersModel_h
#define _TtC33IGDirectInboxCustomizationFilters37IGDirectInboxCustomizeTopFiltersModel_h
@import Foundation;

@class NSArray;

@interface _TtC33IGDirectInboxCustomizationFilters37IGDirectInboxCustomizeTopFiltersModel : NSObject { // (Swift)
  /* instance variables */
   accountTypeModels;
   errorHandler;
   sessionUserDefaults;
   didChangeSelection;
   $__lazy_storage_$_selectedIndexes;
}

@property (nonatomic, readonly) NSArray *selectedTopFiltersAccountTypeModels;
@property (nonatomic, readonly) BOOL allAccountTypesSelected;
@property (nonatomic, readonly) BOOL didChangeSelectedFilters;

/* instance methods */
- (id)initWith:(id)with;
- (void)resetDidChangeFiltersSelection;
- (id)init;
@end

#endif /* _TtC33IGDirectInboxCustomizationFilters37IGDirectInboxCustomizeTopFiltersModel_h */
