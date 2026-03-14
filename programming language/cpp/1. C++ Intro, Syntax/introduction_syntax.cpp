/*
============================================================
   INTRODUCTION TO C++
============================================================

📌 What is C++?
   C++ is a powerful, high-performance, general-purpose programming language created by Bjarne Stroustrup in 1979.

   It is an extension of the C language with added features like:
   → Object-Oriented Programming (OOP)
   → Templates
   → Exception Handling
   → The Standard Template Library (STL)

🎯 Remember:
   → C++ is case-sensitive  (main ≠ Main)
   → Every statement ends with a semicolon ';'
   → Curly braces '{}' define blocks of code

📌 Why Learn C++?
   ✅ Used in Game Development (Unreal Engine 🎮)
   ✅ Used in Competitive Programming 🏆
   ✅ Used in Operating Systems & Embedded Systems
   ✅ Gives you deep understanding of how computers work 🧠
   ✅ Makes you a stronger programmer overall 💪
*/



// Syntax:
#include <iostream>                     // 📦 Library that lets us use input/output
using namespace std;                    // ✅ So we don't have to write "std::" every time

int main()                              // 🚪 Entry point — every C++ program starts here
{
    cout << "Hello, World!" << endl;    // 🖨️ Print to the screen
    return 0;                           // ✅ Tells the OS the program ran successfully
}

/*

📌 Breaking It Down:
   ┌─────────────────────────────────────────────────────┐
   │  #include <iostream>  → includes input/output tools │
   │  using namespace std  → avoid writing std:: always  │
   │  int main()           → main function, starts here  │
   │  cout                 → used to PRINT (output)      │
   │  cin                  → used to READ input          │
   │  <<                   → insertion operator          │
   │  endl                 → ends the line               │
   │  return 0             → program ended successfully  │
   └─────────────────────────────────────────────────────┘


You can also write:
    #include <iostream>

    int main()
    {
        std::cout << "Hello World!";
        return 0;
    }

*/
