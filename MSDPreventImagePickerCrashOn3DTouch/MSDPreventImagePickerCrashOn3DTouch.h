/**
    Fixes a crash on (at least) iOS 9.0 and iOS 9.1 in UIImagePickerController when 3D Touching a photo.
 
    This function is idempotent. You can call it multiple times with no ill effect.
 */
extern void MSDPreventImagePickerCrashOn3DTouch(void);
