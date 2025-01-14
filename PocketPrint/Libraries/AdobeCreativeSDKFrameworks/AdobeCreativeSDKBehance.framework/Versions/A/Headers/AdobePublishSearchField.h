/******************************************************************************
 *
 * ADOBE CONFIDENTIAL
 * ___________________
 *
 * Copyright 2013 Adobe Systems Incorporated
 * All Rights Reserved.
 *
 * NOTICE:  All information contained herein is, and remains the property of
 * Adobe Systems Incorporated and its suppliers, if any. The intellectual and
 * technical concepts contained herein are proprietary to Adobe Systems
 * Incorporated and its suppliers and are protected by trade secret or
 * copyright law. Dissemination of this information or reproduction of this
 * material is strictly forbidden unless prior written permission is obtained
 * from Adobe Systems Incorporated.
 *
 * THIS FILE IS PART OF THE CREATIVE SDK PUBLIC API
 *
 ******************************************************************************/

#import "AdobePublishBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

/**
 `AdobePublishSearchField` represents a single Creative Field on Behance
 */
@interface AdobePublishSearchField : AdobePublishBaseModel

/**
 id of the creative field
 */
@property (nonatomic, strong) NSNumber * fieldId;

/**
 title of the creative field
 */
@property (nonatomic, strong) NSString * title;

@end

NS_ASSUME_NONNULL_END
