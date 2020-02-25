# Build on MacOS 10.14

```
$ make -f Makefile.macos
[...]
$ ./ideas
```
![MacOS ideas screenshot](ideas_macos-1.jpg?raw=true "MacOS ideas screenshot")

1. Linking,
for Macos OpenGL:
 -framework GLUT -framework OpenGL -framework Cocoa
instead of linking to the libs, 
 -lGL -lGLU -lglut -lX11

2. Warnings
The only warning displayed is for deprecated functions in OpenGL. We can turn off those warnings with a define.

3. Success! It builds and runs. The default viewport does not render square, but it scales to the window shape.
```
$ otool -L ./ideas
./ideas:
	/System/Library/Frameworks/GLUT.framework/Versions/A/GLUT (compatibility version 1.0.0, current version 1.0.0)
	/System/Library/Frameworks/OpenGL.framework/Versions/A/OpenGL (compatibility version 1.0.0, current version 1.0.0)
	/System/Library/Frameworks/Cocoa.framework/Versions/A/Cocoa (compatibility version 1.0.0, current version 23.0.0)
	/usr/lib/libSystem.B.dylib (compatibility version 1.0.0, current version 1252.250.1)
```

![MacOS ideas screenshot end frame](ideas_macos-2.jpg?raw=true "MacOS ideas screenshot")
