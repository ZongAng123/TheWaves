TheWaves大波浪效果(Xcode11新建工程做的)
```
iphone6p黑屏已解决
```
欢迎访问:https://www.jianshu.com/p/6e1716d9bde0
```
#define IBHexColor(hexValue) IBHexColorA(hexValue, 1.0)
#define IBHexColorA(hexValue, a) [UIColor colorWithRed:((float)(((hexValue) & 0xFF0000) >> 16))/255.0 green:((float)(((hexValue) & 0xFF00) >> 8))/255.0 blue:((float)((hexValue) & 0xFF))/255.0 alpha:a]
NS_ASSUME_NONNULL_BEGIN
```
```
 ZAWaveView *waterView = [[ZAWaveView alloc] initWithFrame:(CGRect){0, 0, CGRectGetWidth(self.view.bounds), 228} startColor:IBHexColorA(0xfbd49d, 0.7) endColor:IBHexColorA(0xff785c, 0.7)];
    [self.view addSubview:waterView];
```
在AppDelegate.h中加入UIWindow即可
```
 #import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow * window; //添加即可解决

@end
```
