//
//  CustomIOS7AlertView.h
//  CustomIOS7AlertView
//
//  Created by Richard on 20/09/2013.
//  Copyright (c) 2013 Wimagguc.
//
//  Lincesed under The MIT License (MIT)
//  http://opensource.org/licenses/MIT
//

#import <UIKit/UIKit.h>

@protocol CustomIOS7AlertViewDelegate

- (void)customIOS7dialogButtonTouchUpInside:(id)alertView clickedButtonAtIndex:(NSInteger)buttonIndex;

@end

@interface CustomIOS7AlertView : UIView<CustomIOS7AlertViewDelegate>

// The parent view this 'dialog' is attached to
@property (nonatomic, retain) UIView *dialogView;    // Dialog's container view

// Container within the dialog (place your ui elements here)
@property (nonatomic, strong) UIView *containerViewLandscape;
@property (nonatomic, strong) UIView *containerViewPortrait;

@property (nonatomic, assign) id<CustomIOS7AlertViewDelegate> delegate;
@property (nonatomic, retain) NSArray *buttonTitles;
@property (nonatomic, assign) BOOL useMotionEffects;

@property (copy) void (^onButtonTouchUpInside)(CustomIOS7AlertView *alertView, int buttonIndex) ;

- (id)init;

- (void)show;
- (void)close;

- (IBAction)customIOS7dialogButtonTouchUpInside:(id)sender;
- (void)setOnButtonTouchUpInside:(void (^)(CustomIOS7AlertView *alertView, int buttonIndex))onButtonTouchUpInside;

- (void)deviceOrientationDidChange: (NSNotification *)notification;
- (void)dealloc;

@end
