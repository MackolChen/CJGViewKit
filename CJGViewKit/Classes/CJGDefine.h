//
//  CJGDefine.h
//  Pods
//
//  Created by Chen Jinguo on 2023/1/4.
//

#ifndef CJGDefine_h
#define CJGDefine_h
#import <UIKit/UIKit.h>
#define CJG_PROPERTY_READONLY @property (copy, nonatomic, readonly)

/**
 UIButton 控制图片和文件的显示位子
 - CJGButtonEdgeInsetsStyleTop:  image在上，label在下
 - CJGButtonEdgeInsetsStyleLeft:  image在左，label在右
 - CJGButtonEdgeInsetsStyleBottom: image在下，label在上
 - CJGButtonEdgeInsetsStyleRight: image在右，label在左
 */
typedef NS_ENUM(NSUInteger, CJGButtonEdgeInsetsStyle) {
    CJGButtonEdgeInsetsStyleTop,
    CJGButtonEdgeInsetsStyleLeft,
    CJGButtonEdgeInsetsStyleBottom,
    CJGButtonEdgeInsetsStyleRight
};
#endif /* CJGDefine_h */
