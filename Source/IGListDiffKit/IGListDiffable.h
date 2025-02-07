/*
 * Copyright (c) Meta Platforms, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <Foundation/Foundation.h>

/**
 The `IGListDiffable` protocol provides methods needed to compare the identity and equality of two objects.
 */
NS_SWIFT_NAME(ListDiffable)
@protocol IGListDiffable

/**
 Returns a key that uniquely identifies the object.

 @return A key that can be used to uniquely identify the object.

 @note Two objects may share the same identifier, but are not equal. A common pattern is to use the `NSObject`
 category for automatic conformance. However this means that objects will be identified on their
 pointer value so finding updates becomes impossible.

 @warning This value should never be mutated.
 */
- (nonnull id<NSObject>)diffIdentifier;

/**
 Returns whether the receiver and a given object are equal.

 @param object The object to be compared to the receiver.

 @return `YES` if the receiver and object are equal, otherwise `NO`.
 */
- (BOOL)isEqualToDiffableObject:(nullable id<IGListDiffable>)object;

@end
