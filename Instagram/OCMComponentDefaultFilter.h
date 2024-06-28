//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef OCMComponentDefaultFilter_h
#define OCMComponentDefaultFilter_h
@import Foundation;

#include "OCMComponentFilterProtocol-Protocol.h"
#include "OCMControllerProtocol-Protocol.h"

@class NSMutableArray, NSString, OCMEKSource;

@interface OCMComponentDefaultFilter : NSObject<OCMComponentFilterProtocol> {
  /* instance variables */
  NSObject<OCMControllerProtocol> *_context;
  OCMEKSource *_filtersChangeEvents;
  NSMutableArray *_filterObjects;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)componentID;
- (id)dependentComponentIDs;
- (long long)supportedControllerStates;
- (void)didAttachWithContext:(id)context;
- (void)willDetachWithContext:(id)context;
- (id)filtersChangeEvents;
- (void)setFilters:(id)filters completion:(id /* block */)completion;
- (void)clearInMemoryCacheWithCompletion:(id /* block */)completion;
- (void)exportFilterConfigsWithCompletion:(id /* block */)completion;
- (id)currentFilters;
- (id)currentFilteredFilters;
- (void)addFilter:(id)filter completion:(id /* block */)completion;
- (void)addFilters:(id)filters completion:(id /* block */)completion;
- (void)insertFilter:(id)filter atIndex:(unsigned long long)index completion:(id /* block */)completion;
- (void)removeFilter:(id)filter completion:(id /* block */)completion;
- (void)removeFilters:(id)filters completion:(id /* block */)completion;
- (void)removeFilterAtIndex:(unsigned long long)index completion:(id /* block */)completion;
- (void)removeAllFiltersWithCompletion:(id /* block */)completion;
- (void)replaceFilter:(id)filter withFilter:(id)filter completion:(id /* block */)completion;
- (void)replaceFilterAtIndex:(unsigned long long)index withFilter:(id)filter completion:(id /* block */)completion;
@end

#endif /* OCMComponentDefaultFilter_h */