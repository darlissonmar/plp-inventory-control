
#include <string>

inline string SystemToStdString(System::String ^input){
					 std::string output=""; 
					 using namespace System::Runtime::InteropServices;
					 using namespace System;
					 const char* charString = ( const char* )( Marshal::StringToHGlobalAnsi( input ) ).ToPointer (); 
					 output = charString; 
		     		 Marshal::FreeHGlobal ( IntPtr ( ( void* ) charString ) );
					 return output;
			 }