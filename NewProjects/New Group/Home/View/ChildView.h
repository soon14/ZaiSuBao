//
//  ChildView.h
//  NewProjects
//
//  Created by Mac on 2017/12/10.
//  Copyright © 2017年 DSOperation. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ChildView : UIView
-(id)initWithFrame:(CGRect)frame TitleName:(NSString*)titlename AndDataArr:(NSArray*)dataArr;
@property (nonatomic,copy)void(^NameBlock)(NSMutableArray* dataArr);
-(void)show;
-(void)dissmiss;
@end
