# Print Utilities
Simple and clean library for printing variables without the hassle of formatting!

# Why use this library?
Ever wanted to print a lot of diffrent value types like (DWORD64, DWORD32, int64 etc)?

You probably know that to use Printf for printing values you would write this (Image below)

![image](https://user-images.githubusercontent.com/14792697/216840222-0e4fb10f-e8af-40f6-b65f-dada71492cb5.png)

Yes, it doesnt take long to write, but you would need to write the correct format for it to print correctly.
This is where my library Print Utilities comes in!

Standard -> signed int64 printf:

![image](https://user-images.githubusercontent.com/14792697/216840222-0e4fb10f-e8af-40f6-b65f-dada71492cb5.png)

Print Utilities -> signed int64 printf:

![image](https://user-images.githubusercontent.com/14792697/216841044-0bd8b7dd-a2c5-4f97-b335-07ba444fa90d.png)

As shown above this makes it easy for programmers to simply write a function, then pass the text they want and the value and thats all, no need to remember formats for the types since Print Utilities handles that part for you.

# What data types are currently supported?

  Int64 (both signed and unsigned)
  
  Int32 (both signed and unsigned)
  
  Float
  
  Bool
  
  Double
  
  DWORD32 (Can be printed as hex if selected)
  
  DWORD64 (Can be printed as hex if selected)
  
  Uintptr_t (Can be printed as hex if selected)

# How to use it?

**NOTE: Before we begin you should know that this library only works on C++ 14 and up!**


1. Download the .rar file, open it and drag the folder called **"Includes"** inside your project solution dir.

2. Go into Visual Studio and right click on your project, **(Highlighted yellow)**

![include](https://user-images.githubusercontent.com/14792697/216845342-b42e8051-8535-4815-b162-ef1e5f071df6.PNG)

3. Click on "Properties", again if you dont know which one it is look at the image below **(Highlighted in yellow)**

![include](https://user-images.githubusercontent.com/14792697/216845457-7217b0fc-ad7e-4743-aeb4-510335e2c268.PNG)

4. Click on "C/C++" **(Highlighted yellow)**, now copy this "$(SolutionDir)\Includes\Header" into the "Additional Include Directories" **(Highlighted yellow)**

![include](https://user-images.githubusercontent.com/14792697/216845814-f17f897c-a5a9-4b6a-b5ee-a3f4fb8053cc.PNG)

5. Next click on "Linker" **(Highlighted yellow)**, again copy this "$(SolutionDir)\Includes\Lib" into the "Additional Library Directories" **(Highlighted yellow)**

![include](https://user-images.githubusercontent.com/14792697/216846094-f3c64dfb-5a29-4fbd-8f22-659458097463.PNG)

6. Click at the left side of "Linker" to expaned it, now click on "Input" **(Highlighted yellow)**, now copy this "PrintHelperLib.lib" into "Additional Dependencies" **(Highlighted yellow)**

![include](https://user-images.githubusercontent.com/14792697/216846421-d82e7e1a-8220-49db-8187-f78ae6d5b387.PNG)

7. Click on "Apply" **(Highlighted yellow)** and then "OK"

![include](https://user-images.githubusercontent.com/14792697/216846665-a07ad2eb-1d2a-486a-a094-be9e917cc73c.PNG)

8. Last step is to include the header file by writing this at the top of your "#include <PrintUtils.h>"

![include](https://user-images.githubusercontent.com/14792697/216846999-736d77a1-0754-45f8-9223-99ea87ec78bc.PNG)

9. Try writing "PrintUtils::", if you get a list of different functions then congratulations, if not you made a mistake somewhere, go back and try again.

![include](https://user-images.githubusercontent.com/14792697/216847108-03951d16-d6b7-4dd9-abf8-c2226c7a3d34.PNG)
