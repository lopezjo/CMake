VC_MDD_ANDROID_USE_OF_STL
------------------------------

Set the C++ Standard Library to use.

This is a string property that could be set to the one of
the following values:

* ``system``: "Minimal C++ runtime library (system)"
* ``gabi++_static``: "C++ runtime static library (gabi++_static)"
* ``gabi++_shared``: "C++ runtime shared library (gabi++_shared)"
* ``stlport_static``: "STLport runtime static library (stlport_static)"
* ``stlport_shared``: "STLport runtime shared library (stlport_shared)"
* ``gnustl_static``: "GNU STL static library (gnustl_static)"
* ``gnustl_shared``: "GNU STL shared library (gnustl_shared)"
* ``c++_static``: "LLVM libc++ static library (c++_static)"
* ``c++_shared``: "LLVM libc++ shared library (c++_shared)"

If set, it overrides the default.
