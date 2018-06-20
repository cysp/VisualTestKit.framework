#import <UIKit/UIKit.h>

#import <VisualTestKit/VTKAssertID.h>


API_AVAILABLE(ios(12.0)) API_UNAVAILABLE(watchos, macos, tvos)
@interface VTKAssert
@property (nonatomic,copy,nullable) NSString *referenceImagesDirectory;
- (void)assertView:(UIView * __nonnull)view identifier:(id<VTKAssertID> __nonnull)identifier filePath:(NSString * __nonnull)filePath lineNumber:(NSUInteger)lineNumber;
@end
