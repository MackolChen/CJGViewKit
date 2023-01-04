//
//  UIView+CJGExtension.h
//  TouristGuide
//
//  Created by Jinguo Chen on 2021/4/2.
//

#import "CJGDefine.h"
NS_ASSUME_NONNULL_BEGIN

@interface UIView (CJGExtension)
CJG_PROPERTY_READONLY UIView *(^cjg_backgrountColor)(UIColor *backgrountColor);
CJG_PROPERTY_READONLY UIView *(^cjg_cornerRadius)(CGFloat cornerRadius);
CJG_PROPERTY_READONLY UIView *(^cjg_clipsToBounds)(BOOL clipsToBounds);
CJG_PROPERTY_READONLY UIView *(^cjg_borderWidth)(CGFloat borderWidth);
CJG_PROPERTY_READONLY UIView *(^cjg_borderColor)(UIColor *cjg_borderColor);
CJG_PROPERTY_READONLY UIView *(^cjg_alpha)(CGFloat alpha);

@end

NS_ASSUME_NONNULL_END
