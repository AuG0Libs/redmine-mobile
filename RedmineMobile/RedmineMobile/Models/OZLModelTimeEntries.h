//
//  OZLModelTimeEntries.h
//  RedmineMobile
//
//  Created by lizhijie on 7/22/13.

// This code is distributed under the terms and conditions of the MIT license.

// Copyright (c) 2013 Zhijie Lee(onezeros.lee@gmail.com)
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
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
#import "OZLModelProject.h"
#import "OZLModelIssue.h"
#import "OZLModelUser.h"
#import "OZLModelTimeEntryActivity.h"


@interface OZLModelTimeEntries : NSObject
//"id":3880,"project":{"id":14848,"name":"TVS-SCS DEMO PROJ 1"},"issue":{"id":16697},"user":{"id":20600,"name":"Derek Halford"},"activity":{"id":9,"name":"Development"},"hours":1.0,"comments":"Issue has been confirmed","spent_on":"2013-07-22","created_on":"2013-07-22T10:36:57Z","updated_on":"2013-07-22T10:36:57Z"
@property(nonatomic) int index;
@property(nonatomic, strong) OZLModelProject* project;
@property(nonatomic, strong) OZLModelUser* user;
@property(nonatomic, strong) OZLModelIssue* issue;
@property(nonatomic, strong) OZLModelTimeEntryActivity* activity;
@property(nonatomic) float hours;
@property(nonatomic, strong) NSString* comments;
@property(nonatomic, strong) NSString* spentOn;
@property(nonatomic, strong) NSString* createdOn;
@property(nonatomic, strong) NSString* updatedOn;



-(id)initWithDictionary:(NSDictionary*)dic;
-(NSMutableDictionary*) toParametersDic;


@end
