//
//  CurrentViewController.h
//  Test
//
//  Created by Bora Sabuncu on 2013-03-23.
//  Copyright (c) 2013 Bora Sabuncu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CurrentViewController : UIViewController {
    IBOutlet UIWebView *webView;
}

@property (retain, nonatomic) IBOutlet UIWebView *webView;

-(void)resetWebView;
@end