//
//  UIView+CJGExtension.h
//  TouristGuide
//
//  Created by Jinguo Chen on 2021/4/2.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (CJGExtension)
@property (copy,   nonatomic) UIView *(^cjg_backgrountColor)(UIColor *backgrountColor);
@property (copy,   nonatomic) UIView *(^cjg_cornerRadius)(CGFloat cornerRadius);
@property (copy,   nonatomic) UIView *(^cjg_clipsToBounds)(BOOL clipsToBounds);
@property (copy,   nonatomic) UIView *(^cjg_borderWidth)(CGFloat borderWidth);
@property (copy,   nonatomic) UIView *(^cjg_borderColor)(UIColor *cjg_borderColor);
@property (copy,   nonatomic) UIView *(^cjg_alpha)(CGFloat alpha);

- (void)setCjg_backgrountColor:(UIView * _Nonnull (^ _Nonnull)(UIColor * _Nonnull))cjg_backgrountColor NS_UNAVAILABLE;
- (void)setCjg_cornerRadius:(UIView * _Nonnull (^ _Nonnull)(CGFloat))cjg_cornerRadius NS_UNAVAILABLE;
- (void)setCjg_clipsToBounds:(UIView * _Nonnull (^ _Nonnull)(BOOL))cjg_clipsToBounds NS_UNAVAILABLE;
- (void)setCjg_borderWidth:(UIView * _Nonnull (^ _Nonnull)(CGFloat))cjg_borderWidth NS_UNAVAILABLE;
- (void)setCjg_borderColor:(UIView * _Nonnull (^ _Nonnull)(UIColor * _Nonnull))cjg_borderColor NS_UNAVAILABLE;
- (void)setCjg_alpha:(UIView * _Nonnull (^ _Nonnull)(CGFloat))cjg_alpha NS_UNAVAILABLE;
@end

NS_ASSUME_NONNULL_END
