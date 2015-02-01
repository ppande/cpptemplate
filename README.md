'cpptemplate' is a cmake template for a C++ project integrated with google test.
It may be forked to create a starting point for a new project. It contains a 
sample source file and a google test. The project is named 'myproject' and 
should be changed appropriately in CMakeLists.txt located at project_root, src
and tests folder.

Quick start - Linux
--------------------
Run build.sh from linux shell and the project directory as the current directory.


Quick start - Windows
---------------------
Run build.cmd from VS2012 x86 native command prompt. For detailed instructions
read below.


Setting up dev environement using Visual Studio
-----------------------------------------------
Assuming, the template has been checked out to c:\workspace\. as 'myproject',
and that you have cmake.exe installed, follow the steps below.

1. Open the VS developer command prompt.
From the start menu locate "VS2012 x86 native command prompt" or suitable to your
visual studio environment and launch it.

2. Change your working directory to the build directory
c:\> cd c:\workspace\myproject\build

4. Generate Visual Studio project files using cmake
c:\workspace\myproject\build\> cmake.exe ..

5. To compile "tests" and generate tests.exe in Debug mode,
c:\workspace\myproject\build\> cmake.exe --build . --target tests --config Debug

6. Run the tests as follows
c:\workspace\myproject\build> tests\Debug\tests.exe


Developing from Visual Studio
------------------------------
Step 2 from previous section would have generated a Visual studio solution 
file. You can open it up in Visual Studio 12 and start developing.

