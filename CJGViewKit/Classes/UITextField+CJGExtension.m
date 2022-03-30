//
//  UITextField+CJGExtension.m
//  TouristGuide
//
//  Created by Jinguo Chen on 2021/4/2.
//

#import "UITextField+CJGExtension.h"

@implementation UITextField (CJGExtension)
@dynamic cjg_text;
@dynamic cjg_textColor;
@dynamic cjg_font;
@dynamic cjg_textAlignment;
@dynamic cjg_placeholder;
@dynamic cjg_keyboardType;
@dynamic cjg_attributedPlaceholder;
- (UITextField * _Nonnull (^)(NSString * _Nonnull))cjg_text{
    return ^UITextField * (NSString *text){
        self.text = text;

        return self;
    };
}
- (UITextField * _Nonnull (^)(UIColor * _Nonnull))cjg_textColor{
    return ^UITextField * (UIColor *textColor){
        self.textColor = textColor;
        return self;
    };
}
- (UITextField * _Nonnull (^)(UIFont * _Nonnull))cjg_font{
    return ^UITextField *(UIFont *font){
        self.font = font;
        return self;
    };
}
- (UITextField * _Nonnull (^)(NSTextAlignment))cjg_textAlignment{
    return ^UITextField *(NSTextAlignment textAlignment){
        self.textAlignment = textAlignment;
        return self;
    };
}
- (UITextField * _Nonnull (^)(NSString * _Nonnull))cjg_placeholder{
    return ^UITextField *(NSString *placeholder){
        self.placeholder = placeholder;
        return self;
    };
}
- (UITextField * _Nonnull (^)(UIKeyboardType))cjg_keyboardType{
    return ^UITextField *(UIKeyboardType keyboardType){
        self.keyboardType = keyboardType;
        return self;
    };
}
- (UITextField * _Nonnull (^)(NSAttributedString *))cjg_attributedPlaceholder{
    return ^UITextField *(NSAttributedString *attributedPlaceholder){
        self.attributedPlaceholder = attributedPlaceholder;
        return self;
    };
}
@end
