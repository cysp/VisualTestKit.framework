#import <Foundation/Foundation.h>


typedef NS_OPTIONS(NSUInteger, VTKAssertIDDecorations) {
    VTKAssertIDDecorationScreenWidth = 0x1,
    VTKAssertIDDecorationScreenHeight = 0x2,
    VTKAssertIDDecorationScreenScale = 0x4,
    VTKAssertIDDecorationLocale = 0x8,
    VTKAssertIDDecorationContentSizeCategory = 0x10,
    VTKAssertIDDecorationDisplayGamut = 0x20,
};


@protocol VTKAssertID <NSObject>
@property(nonatomic,readonly) VTKAssertIDDecorations vtkIDDecorationsMask;
@property(nonatomic,nonnull,readonly) NSString *vtkAssertName;
@end

@interface NSString (VTKID) <VTKAssertID>
@end

API_AVAILABLE(ios(12.0)) API_UNAVAILABLE(watchos, macos, tvos)
extern NSString * __nonnull NSStringFromVTKAssertID(id<VTKAssertID> __nonnull);


API_AVAILABLE(ios(12.0)) API_UNAVAILABLE(watchos, macos, tvos)
@interface VTKAssertID : NSObject <VTKAssertID>
- (instancetype __nonnull)initWithName:(NSString * __nonnull)name decorationMask:(VTKAssertIDDecorations)decorationMask;
@property(nonatomic,readonly) VTKAssertIDDecorations vtkIDDecorationsMask;
@property(nonatomic,nonnull,readonly) NSString *vtkAssertName;
@end


API_AVAILABLE(ios(12.0)) API_UNAVAILABLE(watchos, macos, tvos)
extern VTKAssertID * __nonnull VTKID(NSString * __nonnull name, VTKAssertIDDecorations decorationMask);
