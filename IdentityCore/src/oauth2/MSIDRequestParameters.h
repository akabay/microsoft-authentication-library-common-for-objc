// Copyright (c) Microsoft Corporation.
// All rights reserved.
//
// This code is licensed under the MIT License.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files(the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and / or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions :
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <Foundation/Foundation.h>

@class MSIDPkce;
@class MSIDClientInfo;

@interface MSIDRequestParameters : NSObject <NSCopying>

- (instancetype)initWithAuthority:(NSURL *)authority
                      redirectUri:(NSString *)redirectUri
                         clientId:(NSString *)clientId
                           target:(NSString *)target
                    correlationId:(NSUUID *)correlationId;

// Commonly used or needed properties
@property (readwrite) NSURL *authority;
@property (readwrite) NSString *redirectUri;
@property (readwrite) NSString *clientId;
@property (readwrite) NSString *target;

@property (readwrite) NSUUID *correlationId;

@property (readonly) NSString *resource;
@property (readonly) NSOrderedSet<NSString *> *scopes;

// Optionally used or needed properties
@property (readwrite) NSString *loginHint;
@property (readwrite) NSDictionary<NSString *, NSString *> *extraQueryParameters;
@property (readwrite) NSString *promptBehavior;
@property (readwrite) NSString *claims;

@property (readwrite) NSDictionary<NSString *, NSString *> *sliceParameters;
@property (readwrite) NSString *requestState;

// Is this only for V2?
@property (readwrite) MSIDPkce *pkce;

@property (readwrite) MSIDClientInfo *clientInfo;
@property (readwrite) NSString *rawIdTokenString;


@property (readwrite) NSURL *explicitStartURL;

@end
