//
//  Account.m
//  MailTest
//
//  Created by LGBS dev on 7/25/14.
//  Copyright (c) 2014 LGBS. All rights reserved.
//

#import "Account.h"

@implementation Account
+(Account*)initWithName : (NSString*)login andmail:(NSString*)mail
{
    Account* newUser =[[Account alloc]init];
    if (newUser) {
        newUser.login=login;
        newUser.mail=mail;
    }
    return newUser;
}
@end
