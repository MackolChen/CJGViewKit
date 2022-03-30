//
//  UILabel+CJGExtension.m
//  TouristGuide
//
//  Created by Jinguo Chen on 2021/4/2.
//

#import "UILabel+CJGExtension.h"

@implementation UILabel (CJGExtension)
@dynamic cjg_text;
@dynamic cjg_textColor;
@dynamic cjg_font;
@dynamic cjg_textAlignment;
@dynamic cjg_numberOfLines;
@dynamic cjg_attributedText;
- (UILabel * _Nonnull (^)(NSString * _Nonnull))cjg_text{
    return ^UILabel * (NSString *text){
        self.text = text;
        return self;
    };
}
- (UILabel * _Nonnull (^)(UIColor * _Nonnull))cjg_textColor{
    return ^UILabel * (UIColor *textColor){
        self.textColor = textColor;
        return self;
    };
}
- (UILabel * _Nonnull (^)(UIFont * _Nonnull))cjg_font{
    return ^UILabel *(UIFont *font){
        self.font = font;
        return self;
    };
}
- (UILabel * _Nonnull (^)(NSTextAlignment))cjg_textAlignment{
    return ^UILabel *(NSTextAlignment textAlignment){
        self.textAlignment = textAlignment;
        return self;
    };
}
- (UILabel * _Nonnull (^)(NSInteger))cjg_numberOfLines{
    return ^UILabel *(NSInteger numberOfLines){
        self.numberOfLines = numberOfLines;
        return self;
    };
}
- (UILabel * _Nonnull (^)(NSAttributedString * _Nonnull))cjg_attributedText{
    return ^UILabel *(NSAttributedString *attributedText){
        self.attributedText = attributedText;
        return self;
    };
}
@end
