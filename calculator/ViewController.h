//
//  ViewController.h
//  calculator
//
//  Created by Mariah Cox on 12/3/13.
//  Copyright (c) 2013 Mariah Cox. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
{
    int total;
    int mode;
    NSString * valueString;
    IBOutlet UILabel * label;
    BOOL lastButtonWasMode;
}

-(IBAction)tappedClear:(id)sender;
-(IBAction)tappedNumber:(UIButton*)btn;
-(IBAction)tappedPlus:(id)sender;
-(IBAction)tappedMinus:(id)sender;
-(IBAction)tappedTimes:(id)sender;
-(IBAction)tappedEquals:(id)sender;



@end
