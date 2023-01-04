//
//  UIButton+CJGExtension.m
//  TouristGuide
//
//  Created by Jinguo Chen on 2021/4/2.
//

#import "UIButton+CJGExtension.h"

@implementation UIButton (CJGExtension)
@dynamic cjg_title;
@dynamic cjg_titleColor;
@dynamic cjg_font;
@dynamic cjg_image;
@dynamic cjg_backgroundImage;
@dynamic cjg_attributedTitle;
- (UIButton * _Nonnull (^)(NSString * _Nonnull, UIControlState))cjg_title{
    return ^UIButton *(NSString *title,UIControlState state){
        [self setTitle:title forState:state];
        return self;
    };
}
- (UIButton * _Nonnull (^)(UIColor * _Nonnull, UIControlState))cjg_titleColor{
    return ^UIButton *(UIColor *titleColor,UIControlState state){
        [self setTitleColor:titleColor forState:state];
        return self;
    };
}
- (UIButton * _Nonnull (^)(UIFont * _Nonnull))cjg_font{
    return ^UIButton *(UIFont *font){
        self.titleLabel.font = font;
        return self;
    };
}
- (UIButton * _Nonnull (^)(UIImage * _Nonnull, UIControlState))cjg_image{
    return ^UIButton *(UIImage *image,UIControlState state){
        [self setImage:image forState:state];
        return self;
    };
}
- (UIButton * _Nonnull (^)(UIImage * _Nonnull, UIControlState))cjg_backgroundImage{
    return ^UIButton *(UIImage *backgroundImage,UIControlState state){
        [self setBackgroundImage:backgroundImage forState:state];
        return self;
    };
}
- (UIButton * _Nonnull (^)(NSAttributedString * _Nonnull, UIControlState))cjg_attributedTitle{
    return ^UIButton *(NSAttributedString *title,UIControlState state){
        [self setAttributedTitle:title forState:state];
        return self;
    };
}
- (void)layoutButtonWithEdgeInsetsStyle:(CJGButtonEdgeInsetsStyle)style
                             buttonSize:(CGSize)bsize
                              imageSize:(CGSize)size
                        imageTitleSpace:(CGFloat)space{
    //1.获取图片文字的宽、高
    CGFloat imageWith = self.imageView.image.size.width;
    CGFloat labelHeight = self.titleLabel.intrinsicContentSize.height;
    CGFloat labelwidth = self.titleLabel.intrinsicContentSize.width;
    
    // 2. 声明全局的imageEdgeInsets和labelEdgeInsets
    UIEdgeInsets imageEdgeInsets = UIEdgeInsetsZero;
    UIEdgeInsets labelEdgeInsets = UIEdgeInsetsZero;
    
    size.width = MIN(size.width, bsize.width - 1.0f);
    size.height = MIN(size.height, bsize.height - 1.0f);
    CGFloat fSpace = MAX((bsize.height - labelHeight - space - size.height)/2, 0.5f) ;
    // 3. 根据style和space得到imageEdgeInsets和labelEdgeInsets的值
    switch (style) {
        case CJGButtonEdgeInsetsStyleTop:{
            imageEdgeInsets = UIEdgeInsetsMake(fSpace, (bsize.width - size.width)/2, fSpace + labelHeight + space,  (bsize.width - size.width)/2);
            labelEdgeInsets = UIEdgeInsetsMake(bsize.height - (labelHeight + fSpace), -imageWith, fSpace, 0);
        }
            break;
        case CJGButtonEdgeInsetsStyleLeft:{
            imageEdgeInsets = UIEdgeInsetsMake((bsize.height - size.height)/2, (bsize.width - size.width - space - labelwidth)/2, (bsize.height - size.height)/2, bsize.width - size.width - (bsize.width - size.width - space - labelwidth)/2);
            labelEdgeInsets = UIEdgeInsetsMake(0, -(imageWith - size.width), 0, 0.5);
        }
            break;
        case CJGButtonEdgeInsetsStyleBottom:{
            imageEdgeInsets = UIEdgeInsetsMake(fSpace + labelHeight + space, (bsize.width - size.width)/2, fSpace, (bsize.width - size.width)/2);
            labelEdgeInsets = UIEdgeInsetsMake(fSpace, 0, size.height + fSpace + space, 0);
        }
            break;
        case CJGButtonEdgeInsetsStyleRight:{
            CGFloat fleftSpace = (bsize.width - size.width - space - labelwidth)/2;
            imageEdgeInsets = UIEdgeInsetsMake((bsize.height - size.height)/2,bsize.width - size.width - fleftSpace, (bsize.height - size.height)/2, fleftSpace);
            labelEdgeInsets = UIEdgeInsetsMake(0, -(imageWith + size.width + fSpace), 0, 0);
        }
            break;
        default:
            break;
    }
    // 4. 赋值
    self.titleEdgeInsets = labelEdgeInsets;
    self.imageEdgeInsets = imageEdgeInsets;
}
@end
