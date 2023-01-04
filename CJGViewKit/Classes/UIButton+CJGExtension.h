//
//  UIButton+CJGExtension.h
//  TouristGuide
//
//  Created by Jinguo Chen on 2021/4/2.
//

#import "CJGDefine.h"

NS_ASSUME_NONNULL_BEGIN

@interface UIButton (CJGExtension)
CJG_PROPERTY_READONLY UIButton *(^cjg_title)(NSString *title,UIControlState state);
CJG_PROPERTY_READONLY UIButton *(^cjg_titleColor)(UIColor *titleColor,UIControlState state);
CJG_PROPERTY_READONLY UIButton *(^cjg_font)(UIFont *font);
CJG_PROPERTY_READONLY UIButton *(^cjg_image)(UIImage *image,UIControlState state);
CJG_PROPERTY_READONLY UIButton *(^cjg_backgroundImage)(UIImage *backgroundImage,UIControlState state);
CJG_PROPERTY_READONLY UIButton *(^cjg_attributedTitle)(NSAttributedString *title,UIControlState state);
/**
 *  设置button的titleLabel和imageView的布局样式，及间距
 *  (注：此函数一定要在button 的title 和image 设置完成后使用)
 *  @param style titleLabel和imageView的布局样式
 *  @param space titleLabel和imageView的间距
 */
- (void)layoutButtonWithEdgeInsetsStyle:(CJGButtonEdgeInsetsStyle)style
                             buttonSize:(CGSize)bsize
                              imageSize:(CGSize)size
                        imageTitleSpace:(CGFloat)space;
@end

NS_ASSUME_NONNULL_END
