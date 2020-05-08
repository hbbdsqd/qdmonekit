//
//  UIView+FLExtension.h
//  FLStudy
//
//  Created by 苏秋东 on 2020/5/8.
//  Copyright © 2020 苏秋东. All rights reserved.
//

#define SCREEN_WIDTH ([UIScreen mainScreen].bounds.size.width)

#define SCREEN_HEIGHT ([UIScreen mainScreen].bounds.size.height)

#import <UIKit/UIKit.h>
#import <objc/message.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (FLExtension)
/**
 * Shortcut for frame.origin.x.
 *
 * Sets frame.origin.x = x
 */
@property (nonatomic, assign) CGFloat x;
/**
 * Shortcut for frame.origin.x.
 *
 * Sets frame.origin.x = left
 */
@property (nonatomic, assign) CGFloat left;

/**
 * Shortcut for frame.origin.y
 *
 * Sets frame.origin.y = top
 */
@property (nonatomic, assign) CGFloat top;

/**
 * Shortcut for frame.origin.y
 *
 * Sets frame.origin.y = y
 */
@property (nonatomic, assign) CGFloat y;

/**
 * Shortcut for frame.origin.x + frame.size.width
 *
 * Sets frame.origin.x = right - frame.size.width
 */
@property (nonatomic, assign) CGFloat right;

/**
 * Shortcut for frame.origin.y + frame.size.height
 *
 * Sets frame.origin.y = bottom - frame.size.height
 */
@property (nonatomic, assign) CGFloat bottom;

/**
 * Shortcut for frame.size.width
 *
 * Sets frame.size.width = width
 */
@property (nonatomic, assign) CGFloat width;

/**
 * Shortcut for frame.size.height
 *
 * Sets frame.size.height = height
 */
@property (nonatomic, assign) CGFloat height;

/**
 * Shortcut for center.x
 *
 * Sets center.x = centerX
 */
@property (nonatomic, assign) CGFloat centerX;

/**
 * Shortcut for center.y
 *
 * Sets center.y = centerY
 */
@property (nonatomic, assign) CGFloat centerY;

/**
 * Shortcut for origin
 *
 * Sets frame.origin = origin
 */
@property (nonatomic, assign) CGPoint origin;

/**
 * Shortcut for size
 *
 * Sets frame.size = size
 */
@property (nonatomic, assign) CGSize size;

/**
 * Utility to convert UIViewAnimationCurve to UIViewAnimationOptions
 *
 * Used in UIViewController+RMAdditions for animating view for keyboard changes
 */
+ (UIViewAnimationOptions)animationOptionsWithCurve:(UIViewAnimationCurve)curve;

- (void) addLoadingView;
- (void) addLoadingViewWithText:(NSString *)text;
- (void) removeLoadingView;

/**
 *  给view切圆角
 *  corners : 哪个角
 *  cornerRadii : 圆角size
 */
- (instancetype)cornerByRoundingCorners:(UIRectCorner)corners cornerRadius:(CGFloat)cornerRadius;
/**
 *  给view所有角切圆角
 *  cornerRadii : 圆角size
 */
- (instancetype)cornerAllCornersWithCornerRadius:(CGFloat)cornerRadius;
/**
 *  给imageView所有角切圆角
 *  cornerRadii : 圆角size
 */
-(instancetype)cornerAll:(UIImageView*)view withCorner:(CGFloat)radius;


/**
 uiimageview 切圆角

 @param view uiimageview
 @param corners 切那几个角
 @param radius cornerRadii : 圆角size
 */
-(instancetype)corner:(UIImageView*)view withRectCorner:(UIRectCorner)corners withCorner:(CGFloat)radius;
@end

NS_ASSUME_NONNULL_END
