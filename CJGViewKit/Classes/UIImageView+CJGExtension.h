//
//  UIImageView+CJGExtension.h
//  TouristGuide
//
//  Created by Jinguo Chen on 2021/4/2.
//

#import "CJGDefine.h"

NS_ASSUME_NONNULL_BEGIN

@interface UIImageView (CJGExtension)
CJG_PROPERTY_READONLY UIImageView *(^cjg_image)(UIImage *image);
CJG_PROPERTY_READONLY UIImageView *(^cjg_contentMode)(UIViewContentMode contentMode);

@end

NS_ASSUME_NONNULL_END
