#pragma once
#include <cstdio>
#include <Windows.h>
#include <string>


// You can read all about the data types and other great information at (https://github.com/MicrosoftDocs/cpp-docs/blob/main/docs/cpp/data-type-ranges.md)


class PrintUtils
{
	public:

		/// <summary>
		/// Also usable for ->  " long long, signed long long "
		/// </summary>
		/// <param name=""></param>
		static void Print_Int64_Signed(const char*,__int64);	//	---> -9,223,372,036,854,775,808 <------> 9,223,372,036,854,775,807

		/// <summary>
		/// Also usable for ->  " signed, signed int, int "
		/// </summary>
		/// <param name=""></param>
		static void Print_Int32_Signed(const char*,__int32);	//  ---> -2,147,483,648 <------> 2,147,483,647


		/// <summary>
		/// Also usable for ->  " unsigned long long "
		/// </summary>
		/// <param name=""></param>
		static void Print_Int64_Unsigned(const char*,unsigned __int64);	//	--->  0  <------>  18,446,744,073,709,551,615

		/// <summary>
		/// Also usable for ->  " unsigned, unsigned int "
		/// </summary>
		/// <param name=""></param>
		static void Print_Int32_Unsigned(const char*, unsigned __int32);	//	--->  0  <------>  4,294,967,295

		/// <summary>
		/// Also usable for ->  " Nothing to add here "
		/// </summary>
		/// <param name=""></param>
		static void Print_Bool(const char*, bool);	//	--->  0 (False) <------>  1 (True)

		static void Print_String(const char* text, const char* value);

		/// <summary>
		/// Also usable for ->  " Nothing to add here "
		/// </summary>
		/// <param name=""></param>
		static void Print_Char_Signed(const char*, signed char);	//	--->  	-128 to 127


		/// <summary>
		/// Also usable for ->  " Nothing to add here "
		/// </summary>
		/// <param name=""></param>
		static void Print_Char_Unsigned(const char*, unsigned char);	//	--->  0 to 255

		/// <summary>
		/// Also usable for ->  " Nothing to add here "
		/// </summary>
		/// <param name=""></param>
		static void Print_Float(const char*, float);	//	--->  3.4E +/- 38 (7 digits)

		/// <summary>
		/// Also usable for ->  " Nothing to add here "
		/// </summary>
		/// <param name=""></param>
		static void Print_Double(const char*, double);	//	--->  1.7E +/- 308 (15 digits)

		/// <summary>
		/// Also usable for ->  " __wchar_t "
		/// </summary>
		/// <param name=""></param>
		static void Print_Wchar(const char*, wchar_t);	//	--->  0  <------>  65,535
		

		/// <summary>
		/// Prints DWORD64
		/// </summary>
		/// <param name=""></param>
		static void Print_DWORD64(const char*, DWORD64, bool);	//	--->  0  <------>  65,535

		/// <summary>
		/// Prints DWORD32
		/// </summary>
		/// <param name=""></param>
		static  void Print_DWORD32(const char*, DWORD32, bool);	//	--->  0  <------>  65,535

		/// <summary>
		/// Prints uintptr_t
		/// </summary>
		/// <param name=""></param>
		static  void Print_Uintptr_t(const char*, uintptr_t, bool);

		static std::string ConvertText(const char*, std::string);



};

