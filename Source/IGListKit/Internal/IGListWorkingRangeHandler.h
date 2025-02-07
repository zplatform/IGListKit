/*
 * Copyright (c) Meta Platforms, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <Foundation/Foundation.h>

@class IGListAdapter;

@interface IGListWorkingRangeHandler : NSObject

/**
 Initializes the working range handler.

 @param workingRangeSize the number of sections beyond the visible viewport that should be considered within the working
 range. Applies equally in both directions above and below the viewport.
 */
- (instancetype)initWithWorkingRangeSize:(NSInteger)workingRangeSize;

/**
 Tells the handler that a cell will be displayed in the IGListKit infra.

 @param indexPath The index path of the cell in the UICollectionView.
 @param listAdapter The adapter managing the infra.
 */
- (void)willDisplayItemAtIndexPath:(NSIndexPath *)indexPath
                    forListAdapter:(IGListAdapter *)listAdapter;

/**
 Tells the handler that a cell did end display in the IGListKit infra.

 @param indexPath The index path of the cell in the UICollectionView.
 @param listAdapter The adapter managing the infra.
 */
- (void)didEndDisplayingItemAtIndexPath:(NSIndexPath *)indexPath
                         forListAdapter:(IGListAdapter *)listAdapter;

@end
