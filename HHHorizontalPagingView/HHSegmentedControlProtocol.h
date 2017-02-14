//
//  HHSegmentControlProtocol.h
//  Demo
//
//  Created by S.Q.Cao on 2017/2/14.
//  Copyright © 2017年 weijingyun. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol HHSegmentedControlProtocol <NSObject>

@property (nonatomic, strong) id selectedSegmentValue;
@property (nonatomic, assign) NSInteger selectedSegmentIndex;

- (void)horizontalControlScrollToContentOffsetX:(CGFloat)xoffset;

@end
