//
//  UITextField+CJGExtension.h
//  TouristGuide
//
//  Created by Jinguo Chen on 2021/4/2.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UITextField (CJGExtension)
@property (copy,   nonatomic) UITextField *(^cjg_text)(NSString *text);
@property (copy,   nonatomic) UITextField *(^cjg_textColor)(UIColor *textColor);
@property (copy,   nonatomic) UITextField *(^cjg_font)(UIFont *font);
@property (copy,   nonatomic) UITextField *(^cjg_textAlignment)(NSTextAlignment textAlignment);
@property (copy,   nonatomic) UITextField *(^cjg_placeholder)(NSString *placeholder);
@property (copy,   nonatomic) UITextField *(^cjg_keyboardType)(UIKeyboardType keyboardType);
@property (copy,   nonatomic) UITextField *(^cjg_attributedPlaceholder)(NSAttributedString *attributedPlaceholder);

- (void)setCjg_text:(UITextField * _Nonnull (^ _Nonnull)(NSString * _Nonnull))cjg_text NS_UNAVAILABLE;
- (void)setCjg_textColor:(UITextField * _Nonnull (^ _Nonnull)(UIColor * _Nonnull))cjg_textColor NS_UNAVAILABLE;
- (void)setCjg_font:(UITextField * _Nonnull (^ _Nonnull)(UIFont * _Nonnull))cjg_font NS_UNAVAILABLE;
- (void)setCjg_textAlignment:(UITextField * _Nonnull (^ _Nonnull)(NSTextAlignment))cjg_textAlignment NS_UNAVAILABLE;
- (void)setCjg_placeholder:(UITextField * _Nonnull (^ _Nonnull)(NSString * _Nonnull))cjg_placeholder NS_UNAVAILABLE;
- (void)setCjg_keyboardType:(UITextField * _Nonnull (^ _Nonnull)(UIKeyboardType))cjg_keyboardType NS_UNAVAILABLE;
- (void)setCjg_attributedPlaceholder:(UITextField * _Nonnull (^ _Nonnull)(NSAttributedString * _Nonnull))cjg_attributedPlaceholder NS_UNAVAILABLE;
@end

NS_ASSUME_NONNULL_END
