//
//  UILabel+CJGExtension.h
//  TouristGuide
//
//  Created by Jinguo Chen on 2021/4/2.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UILabel (CJGExtension)
@property (copy,   nonatomic) UILabel *(^cjg_text)(NSString *text);
@property (copy,   nonatomic) UILabel *(^cjg_textColor)(UIColor *textColor);
@property (copy,   nonatomic) UILabel *(^cjg_font)(UIFont *font);
@property (copy,   nonatomic) UILabel *(^cjg_textAlignment)(NSTextAlignment textAlignment);
@property (copy,   nonatomic) UILabel *(^cjg_numberOfLines)(NSInteger numberOfLines);
@property (copy,   nonatomic) UILabel *(^cjg_attributedText)(NSAttributedString *attributedText);

- (void)setCjg_text:(UILabel * _Nonnull (^ _Nonnull)(NSString * _Nonnull))cjg_text NS_UNAVAILABLE;
- (void)setCjg_textColor:(UILabel * _Nonnull (^ _Nonnull)(UIColor * _Nonnull))cjg_textColor NS_UNAVAILABLE;
- (void)setCjg_font:(UILabel * _Nonnull (^ _Nonnull)(UIFont * _Nonnull))cjg_font NS_UNAVAILABLE;
- (void)setCjg_textAlignment:(UILabel * _Nonnull (^ _Nonnull)(NSTextAlignment))cjg_textAlignment NS_UNAVAILABLE;
- (void)setCjg_numberOfLines:(UILabel * _Nonnull (^ _Nonnull)(NSInteger))cjg_numberOfLines NS_UNAVAILABLE;
- (void)setCjg_attributedText:(UILabel * _Nonnull (^ _Nonnull)(NSAttributedString * _Nonnull))cjg_attributedText NS_UNAVAILABLE;
@end

NS_ASSUME_NONNULL_END
