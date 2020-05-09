//
//  QDViewController.m
//  qdmonekit
//
//  Created by hbbdsqd@163.com on 05/08/2020.
//  Copyright (c) 2020 hbbdsqd@163.com. All rights reserved.
//

#import "QDViewController.h"
#import "QDSubViewController.h"

@interface QDViewController ()

@end

@implementation QDViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor orangeColor];
}

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event{
    QDSubViewController * vc = [[QDSubViewController alloc]init];
    [self presentViewController:vc animated:YES completion:nil];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
