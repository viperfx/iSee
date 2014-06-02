//
//  DiagnosisViewController.h
//  EyeTracking
//
//  Created by Michael Rhodes on 26/01/2014.
//  Copyright (c) 2014 Small Text. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DiagnosisViewController : UIViewController

@property (nonatomic, strong) NSString *diagnosis;

@property (nonatomic,strong) IBOutlet UILabel *diagnosisLabel;

-(IBAction) finish:(id) sender;

@end
