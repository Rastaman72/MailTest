//
//  Account.h
//  MailTest
//
//  Created by LGBS dev on 7/25/14.
//  Copyright (c) 2014 LGBS. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Account : NSObject
@property(nonatomic,retain)NSString* login;
@property(nonatomic,retain)NSString* mail;
+(Account*)initWithName : (NSString*)login andmail:(NSString*)mail;
@end
