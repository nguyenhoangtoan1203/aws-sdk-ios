/*
 * Copyright 2010-2011 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *  http://aws.amazon.com/apache2.0
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */


#import "../AmazonServiceRequestConfig.h"



/**
 * Modify Snapshot Attribute Request
 *
 * \ingroup EC2
 */

@interface EC2ModifySnapshotAttributeRequest:AmazonServiceRequestConfig

{
    NSString       *snapshotId;
    NSString       *attribute;
    NSString       *operationType;
    NSMutableArray *userIds;
    NSMutableArray *groupNames;
}


/**
 * The ID of the EBS snapshot whose attributes are being modified.
 */
@property (nonatomic, retain) NSString *snapshotId;

/**
 * The name of the attribute being modified. <p> Available attribute
 * names: <code>createVolumePermission</code>
 */
@property (nonatomic, retain) NSString *attribute;

/**
 * The operation to perform on the attribute. <p> Available operation
 * names: <code>add</code>, <code>remove</code>
 */
@property (nonatomic, retain) NSString *operationType;

/**
 * The AWS user IDs to add to or remove from the list of users that have
 * permission to create EBS volumes from the specified snapshot.
 * Currently supports "all". <note> Only valid when the
 * <code>createVolumePermission</code> attribute is being modified.
 * </note>
 */
@property (nonatomic, retain) NSMutableArray *userIds;

/**
 * The AWS group names to add to or remove from the list of groups that
 * have permission to create EBS volumes from the specified snapshot.
 * Currently supports "all". <note> Only valid when the
 * <code>createVolumePermission</code> attribute is being modified.
 * </note>
 */
@property (nonatomic, retain) NSMutableArray *groupNames;


/**
 * Default constructor for a new ModifySnapshotAttributeRequest object.  Callers should use the
 * property methods to initialize this object after creating it.
 */
-(id)init;

/**
 * Constructs a new ModifySnapshotAttributeRequest object.
 * Callers should use properties to initialize any additional object members.
 *
 * @param theSnapshotId The ID of the EBS snapshot whose attributes are
 * being modified.
 * @param theAttribute The name of the attribute being modified. <p>
 * Available attribute names: <code>createVolumePermission</code>
 * @param theOperationType The operation to perform on the attribute. <p>
 * Available operation names: <code>add</code>, <code>remove</code>
 */
-(id)initWithSnapshotId:(NSString *)theSnapshotId andAttribute:(NSString *)theAttribute andOperationType:(NSString *)theOperationType;

/**
 * Returns a string representation of this object; useful for testing and
 * debugging.
 *
 * @return A string representation of this object.
 */
-(NSString *)description;


@end