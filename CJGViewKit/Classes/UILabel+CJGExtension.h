//
//  UILabel+CJGExtension.h
//  TouristGuide
//
//  Created by Jinguo Chen on 2021/4/2.
//

#import "CJGDefine.h"

NS_ASSUME_NONNULL_BEGIN

@interface UILabel (CJGExtension)
CJG_PROPERTY_READONLY UILabel *(^cjg_text)(NSString *text);
CJG_PROPERTY_READONLY UILabel *(^cjg_textColor)(UIColor *textColor);
CJG_PROPERTY_READONLY UILabel *(^cjg_font)(UIFont *font);
CJG_PROPERTY_READONLY UILabel *(^cjg_textAlignment)(NSTextAlignment textAlignment);
CJG_PROPERTY_READONLY UILabel *(^cjg_numberOfLines)(NSInteger numberOfLines);
CJG_PROPERTY_READONLY UILabel *(^cjg_attributedText)(NSAttributedString *attributedText);

@end

NS_ASSUME_NONNULL_END
