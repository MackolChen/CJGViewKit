//
//  UITextField+CJGExtension.h
//  TouristGuide
//
//  Created by Jinguo Chen on 2021/4/2.
//

#import "CJGDefine.h"

NS_ASSUME_NONNULL_BEGIN

@interface UITextField (CJGExtension)
CJG_PROPERTY_READONLY UITextField *(^cjg_text)(NSString *text);
CJG_PROPERTY_READONLY UITextField *(^cjg_textColor)(UIColor *textColor);
CJG_PROPERTY_READONLY UITextField *(^cjg_font)(UIFont *font);
CJG_PROPERTY_READONLY UITextField *(^cjg_textAlignment)(NSTextAlignment textAlignment);
CJG_PROPERTY_READONLY UITextField *(^cjg_placeholder)(NSString *placeholder);
CJG_PROPERTY_READONLY UITextField *(^cjg_keyboardType)(UIKeyboardType keyboardType);
CJG_PROPERTY_READONLY UITextField *(^cjg_attributedPlaceholder)(NSAttributedString *attributedPlaceholder);

@end

NS_ASSUME_NONNULL_END
