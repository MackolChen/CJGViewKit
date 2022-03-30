//
//  UIView+CJGExtension.m
//  TouristGuide
//
//  Created by Jinguo Chen on 2021/4/2.
//

#import "UIView+CJGExtension.h"

@implementation UIView (CJGExtension)
@dynamic cjg_backgrountColor;
@dynamic cjg_cornerRadius;
@dynamic cjg_borderWidth;
@dynamic cjg_borderColor;
@dynamic cjg_alpha;
- (UIView * _Nonnull (^)(UIColor * _Nonnull))cjg_backgrountColor{
    return ^UIView * (UIColor *backgrountColor){
        self.backgroundColor = backgrountColor;
        return self;
    };
}
- (UIView * _Nonnull (^)(CGFloat))cjg_cornerRadius{
    return ^UIView *(CGFloat cornerRadius){
        self.layer.cornerRadius = cornerRadius;
        return self;
    };
}
- (UIView * _Nonnull (^)(BOOL))cjg_clipsToBounds{
    return ^UIView *(BOOL clipsToBounds){
        self.clipsToBounds = clipsToBounds;
        return self;
    };
}
- (UIView * _Nonnull (^)(CGFloat))cjg_borderWidth{
    return ^UIView *(CGFloat borderWidth){
        self.layer.borderWidth = borderWidth;
        return self;
    };
}
- (UIView * _Nonnull (^)(UIColor * _Nonnull))cjg_borderColor{
    return ^UIView *(UIColor *borderColor){
        self.layer.borderColor = borderColor.CGColor;
        return self;
    };
}
- (UIView * _Nonnull (^)(CGFloat))cjg_alpha{
    return ^UIView *(CGFloat alpha){
        self.alpha = alpha;
        return self;
    };
}
@end
