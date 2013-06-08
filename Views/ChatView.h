//
//  ChatView.h
//  LiveMobile
//
//  Created by Soroush Pour on 5/06/13.
//  Copyright (c) 2013 Soroush Pour. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LiveMobileSDK.h"
#import "ChatViewController.h"
#import "FPPopoverController.h"
#import "ARCMacros.h"
#import "UIBubbleTableView.h"
#import "UIBubbleTableViewDataSource.h"
#import "NSBubbleData.h"

@class ChatView;
@protocol ChatViewDelegate <NSObject>

@optional

@required

- (void) userDidTypeMessage:(NSString*)message date:(NSDate*)date;

@end

@interface ChatView : NSObject  <UIBubbleTableViewDataSource, UITextFieldDelegate> {
    

    
}

@property (nonatomic, assign) id <ChatViewDelegate> delegate;
@property (strong, nonatomic) UIBubbleTableView* myChat;

- (id) initWithParentViewController:(UIViewController*)passedViewController NavigationItem:(UINavigationItem*)navItem initialMessages:passedMessages delegate:(id <ChatViewDelegate>)ChatViewDelegate;

- (id) initWithParentViewController:(UIViewController*)passedViewController NavigationItem:(UINavigationItem*)navItem delegate:(id <ChatViewDelegate>)ChatViewDelegate;

- (id) initWithParentViewController:(UIViewController*)passedViewController NavigationItem:(UINavigationItem*)navItem;

- (BOOL) addMsgToViewWithText:(NSString*)text date:(NSDate*)date author:(NSString*)author;

@end