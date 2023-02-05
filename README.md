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
Its really simple!

You include it like the the image below and you should be good to go!

![image](https://user-images.githubusercontent.com/14792697/216839871-2c913a60-f916-4dcc-8de2-c7900ebbe9fb.png)
NOTE: C++ 14 and up.

