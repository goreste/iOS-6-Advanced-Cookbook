/*
 Erica Sadun, http://ericasadun.com
 iPhone Developer's Cookbook, 6.x Edition
 BSD License, Use at your own risk
 */

#import <Foundation/Foundation.h>


@interface UIImage (Aspect)
- (UIImage *) applyAspect: (UIViewContentMode) mode inRect: (CGRect) bounds;
@end