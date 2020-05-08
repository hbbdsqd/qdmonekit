//
//  UIColor+FLExtension.h
//  FLStudy
//
//  Created by 苏秋东 on 2020/5/8.
//  Copyright © 2020 苏秋东. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIColor (FLExtension)
// 颜色转换：iOS中（以#开头）十六进制的颜色转换为UIColor(RGB)
+ (UIColor *) colorWithHexString: (NSString *)color;
// 0x开头的十六进制转换成的颜色,透明度可调整
+ (UIColor *)colorWithHex:(long)hexColor alpha:(float)opacity;


+ (UIColor *)randomColor;
@end

NS_ASSUME_NONNULL_END
