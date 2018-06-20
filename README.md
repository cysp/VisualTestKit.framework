# VisualTestKit

This is a text-based dylib that will allow linking against the new private `VisualTestKit.framework` in iOS12. :grinning:

To actually use this you'll probably want some macros like:
```objc
#define STVTKSetReferenceImagesDirectory(_path) __VTKSetReferenceImagesDirectory((_path), self)

#define STVTKAssertView(...) _STVTKAssertViewChoose(__VA_ARGS__, STVTKAssertView3, STVTKAssertView2)(__VA_ARGS__)
#define _STVTKAssertViewChoose(_1, _2, _3, NAME, ...) NAME
#define STVTKAssertView2(_view, _name) STVTKAssertView3((_view), (_name), 0)
#define STVTKAssertView3(_view, _name, _mask) __VTKAssertView((_view), VTKID((_name), (_mask)), self, (id)CFSTR(__FILE__), __LINE__)
```

… and your tests could look something like:
```objc

@interface STMyCoolViewTests : XCTestCase
@end

@implementation STMyCoolViewTests

- (void)setUp {
    if (@available(iOS 12.0, *)) {
        STVTKSetReferenceImagesDirectory(NSStringFromClass(self.class));
    }
}

- (void)testSomeAspect {
    UIView * const view = …;
    STVTKAssertView(view, @"SomeAspect", VTKAssertIDDecorationScreenScale|VTKAssertIDDecorationContentSizeCategory);
}

@end

```