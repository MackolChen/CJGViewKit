//
//  UIImageView+CJGExtension.m
//  TouristGuide
//
//  Created by Jinguo Chen on 2021/4/2.
//

#import "UIImageView+CJGExtension.h"

@implementation UIImageView (CJGExtension)
@dynamic cjg_image;
@dynamic cjg_contentMode;
- (UIImageView * _Nonnull (^)(UIImage * _Nonnull))cjg_image{
    return ^UIImageView *(UIImage *image){
        self.image = image;
        return self;
    };
}
- (UIImageView * _Nonnull (^)(UIViewContentMode))cjg_contentMode{
    return ^UIImageView *(UIViewContentMode contentMode){
        self.contentMode = contentMode;
        return self;
    };
}
@end
