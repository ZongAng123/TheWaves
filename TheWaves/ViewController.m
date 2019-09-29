//
//  ViewController.m
//  TheWaves
//
//  Created by 纵昂 on 2019/9/27.
//  Copyright © 2019 纵昂 https://github.com/ZongAng123. All rights reserved.
//

#import "ViewController.h"
#import "ZAWaveView.h"
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    self.view.backgroundColor = IBHexColor(0xfafbff);
    
    ZAWaveView *waterView = [[ZAWaveView alloc] initWithFrame:(CGRect){0, 0, CGRectGetWidth(self.view.bounds), 228} startColor:IBHexColorA(0xfbd49d, 0.7) endColor:IBHexColorA(0xff785c, 0.7)];
    [self.view addSubview:waterView];
    
    ZAWaveView *waterView2 = [[ZAWaveView alloc] initWithFrame:(CGRect){0, 300, CGRectGetWidth(self.view.bounds), 228} startColor:IBHexColorA(0x90cfed, 0.3) endColor:IBHexColorA(0x21e2aa, 0.7)];
    [self.view addSubview:waterView2];
    
}


@end
