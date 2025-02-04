/*
 * Copyright 2024 Google LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(AppCheckTokenProtocol)
@protocol FIRAppCheckTokenProtocol <NSObject>

/// A Firebase App Check token.
@property(nonatomic, readonly) NSString *token;

/// The App Check token's expiration date in the device's local time.
@property(nonatomic, readonly) NSDate *expirationDate;

@end
NS_ASSUME_NONNULL_END
