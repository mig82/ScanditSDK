//
//  Copyright 2010 Mirasense AG
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//
//
//  DemoViewController shows how to use the Mirasense ScanDK. 
//
//  Any view controller that triggers the ScanDK barcode scanning needs to implement the 
//  ScanDKOverlayControllerDelegate protocol. It also needs to instantiate the ScanDKBarcodePicker 
//  and present the ScanDKBarcodePicker modally. See showScanView method of DemoViewController for 
//  more details.
//


#import <UIKit/UIKit.h>
#import "ScanditSDKOverlayController.h"
#import "DemoScanViewController.h"



@class ScanDKBarcodePicker;


@interface DemoViewController : UIViewController <ScanditSDKOverlayControllerDelegate, 
        UIActionSheetDelegate, UITabBarControllerDelegate, CLLocationManagerDelegate> {
			
	NSString *appKey;
	
	// The picker takes care of the recognition, the video feed and additional visual feedback.
	ScanditSDKBarcodePicker *scanditSDKBarcodePicker;
    CLLocationManager *locationManager;
            
    UILabel *frozenLabel;
    UITapGestureRecognizer *tapRecognizer;
}

@property (nonatomic, retain) NSString *appKey;
@property (nonatomic, retain) ScanditSDKBarcodePicker *scanditSDKBarcodePicker;
@property (nonatomic, retain) UILabel *frozenLabel;
@property (nonatomic, retain) UITapGestureRecognizer *tapRecognizer;

- (IBAction)showScanViewInTab;
- (void)hideFrozenLabel;


@end

