//
//  CCUIViewWrapper.h
//  PaperMoon
//
//  Created by Andy Woo on 7/6/13.
//
//

#import "cocos2d.h"

@interface CCUIViewWrapper : CCSprite
{
    UIView *uiItem;
    float rotation;
}

@property (nonatomic, retain) UIView *uiItem;

+ (id) wrapperForUIView:(UIView*)ui;
- (id) initForUIView:(UIView*)ui;

- (void) updateUIViewTransform;

@end