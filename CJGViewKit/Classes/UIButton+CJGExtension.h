//
//  UIButton+CJGExtension.h
//  TouristGuide
//
//  Created by Jinguo Chen on 2021/4/2.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
/**
 UIButton 控制图片和文件的显示位子
 - ZXLButtonEdgeInsetsStyleTop:  image在上，label在下
 - ZXLButtonEdgeInsetsStyleLeft:  image在左，label在右
 - ZXLButtonEdgeInsetsStyleBottom: image在下，label在上
 - ZXLButtonEdgeInsetsStyleRight: image在右，label在左
 */
typedef NS_ENUM(NSUInteger, ZXLButtonEdgeInsetsStyle) {
    ZXLButtonEdgeInsetsStyleTop,
    ZXLButtonEdgeInsetsStyleLeft,
    ZXLButtonEdgeInsetsStyleBottom,
    ZXLButtonEdgeInsetsStyleRight
};
@interface UIButton (CJGExtension)
@property (copy,   nonatomic) UIButton *(^cjg_title)(NSString *title,UIControlState state);
@property (copy,   nonatomic) UIButton *(^cjg_titleColor)(UIColor *titleColor,UIControlState state);
@property (copy,   nonatomic) UIButton *(^cjg_font)(UIFont *font);
@property (copy,   nonatomic) UIButton *(^cjg_image)(UIImage *image,UIControlState state);
@property (copy,   nonatomic) UIButton *(^cjg_backgroundImage)(UIImage *backgroundImage,UIControlState state);
@property (copy,   nonatomic) UIButton *(^cjg_attributedTitle)(NSAttributedString *title,UIControlState state);
- (void)setCjg_title:(UIButton * _Nonnull (^ _Nonnull)(NSString * _Nonnull, UIControlState))cjg_title NS_UNAVAILABLE;
- (void)setCjg_titleColor:(UIButton * _Nonnull (^ _Nonnull)(UIColor * _Nonnull, UIControlState))cjg_titleColor NS_UNAVAILABLE;
- (void)setCjg_font:(UIButton * _Nonnull (^ _Nonnull)(UIFont * _Nonnull))cjg_font NS_UNAVAILABLE;
- (void)setCjg_image:(UIButton * _Nonnull (^ _Nonnull)(UIImage * _Nonnull, UIControlState))cjg_image NS_UNAVAILABLE;
- (void)setCjg_backgroundImage:(UIButton * _Nonnull (^ _Nonnull)(UIImage * _Nonnull, UIControlState))cjg_backgroundImage NS_UNAVAILABLE;
- (void)setCjg_attributedTitle:(UIButton * _Nonnull (^ _Nonnull)(NSAttributedString * _Nonnull, UIControlState))cjg_attributedTitle NS_UNAVAILABLE;
/**
 *  设置button的titleLabel和imageView的布局样式，及间距
 *  (注：此函数一定要在button 的title 和image 设置完成后使用)
 *  @param style titleLabel和imageView的布局样式
 *  @param space titleLabel和imageView的间距
 */
- (void)layoutButtonWithEdgeInsetsStyle:(ZXLButtonEdgeInsetsStyle)style
                             buttonSize:(CGSize)bsize
                              imageSize:(CGSize)size
                        imageTitleSpace:(CGFloat)space;
@end

NS_ASSUME_NONNULL_END
