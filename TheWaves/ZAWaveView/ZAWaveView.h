//
//  ZAWaveView.h
//  TheWaves
//
//  Created by 纵昂 on 2019/9/29.
//  Copyright © 2019 纵昂 https://github.com/ZongAng123. All rights reserved.
//

#import <UIKit/UIKit.h>

#define IBHexColor(hexValue) IBHexColorA(hexValue, 1.0)
#define IBHexColorA(hexValue, a) [UIColor colorWithRed:((float)(((hexValue) & 0xFF0000) >> 16))/255.0 green:((float)(((hexValue) & 0xFF00) >> 8))/255.0 blue:((float)((hexValue) & 0xFF))/255.0 alpha:a]
NS_ASSUME_NONNULL_BEGIN

@interface ZAWaveView : UIView

/** 振幅*/
@property (nonatomic, assign) CGFloat waveAmplitude;
/** 周期*/
@property (nonatomic, assign) CGFloat waveCycle;
/** 速度*/
@property (nonatomic, assign) CGFloat waveSpeed;
@property (nonatomic, assign) CGFloat waveHeight;
@property (nonatomic, assign) CGFloat waveWidth;
@property (nonatomic, assign) CGFloat wavePointY;
/** 波浪x位移*/
@property (nonatomic, assign) CGFloat waveOffsetX;
/** 波浪颜色*/
@property (nonatomic, strong) UIColor *waveColor;

- (instancetype)initWithFrame:(CGRect)frame startColor:(UIColor *)startColor endColor:(UIColor *)endColor;

@end

NS_ASSUME_NONNULL_END
