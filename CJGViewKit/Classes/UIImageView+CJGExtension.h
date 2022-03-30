//
//  UIImageView+CJGExtension.h
//  TouristGuide
//
//  Created by Jinguo Chen on 2021/4/2.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImageView (CJGExtension)
@property (copy,   nonatomic) UIImageView *(^cjg_image)(UIImage *image);
@property (copy,   nonatomic) UIImageView *(^cjg_contentMode)(UIViewContentMode contentMode);

- (void)setCjg_image:(UIImageView * _Nonnull (^ _Nonnull)(UIImage * _Nonnull))cjg_image NS_UNAVAILABLE;
- (void)setCjg_contentMode:(UIImageView * _Nonnull (^ _Nonnull)(UIViewContentMode))cjg_contentMode NS_UNAVAILABLE;
@end

NS_ASSUME_NONNULL_END
