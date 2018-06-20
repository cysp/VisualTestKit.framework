#import <XCTest/XCTest.h>

#import <VisualTestKit/VTKAssert.h>


@interface XCTestCase (VisualTestKit)
@property (nonatomic,nonnull,readonly) VTKAssert *VisualTestKitAssert API_AVAILABLE(ios(12.0)) API_UNAVAILABLE(watchos, macos, tvos);
@end

API_AVAILABLE(ios(12.0)) API_UNAVAILABLE(watchos, macos, tvos)
extern void __VTKAssertView(UIView * __nonnull, id<VTKAssertID> __nonnull, XCTestCase * __nonull, NSString *, NSUInteger);

API_AVAILABLE(ios(12.0)) API_UNAVAILABLE(watchos, macos, tvos)
extern void __VTKSetReferenceImagesDirectory(NSString * __nullable, XCTestCase * __nonull);
