#pragma warning(disable : 4996)
#pragma once

#include <iostream>
#include <limits>
#include <string>
#include "clsDate.h"
using namespace std;

class clsInputValidate
{
public:
    // static bool IsNumberBetween(short Number, short From, short To) // 5 1 9
    // {
    //     return Number >= From && Number <= To;
    // }

    // static bool IsNumberBetween(int Number, int From, int To) // 5 1 9
    // {
    //     return Number >= From && Number <= To;
    // }

    // static bool IsNumberBetween(float Number, float From, float To) // 5 1 9
    // {
    //     return Number >= From && Number <= To;
    // }

    // static bool IsNumberBetween(double Number, double From, double To) // 5 1 9
    // {
    //     return Number >= From && Number <= To;
    // }

    template <typename T>
    static bool IsNumberBetween(T Number, T From, T To)
    {
        return Number >= From && Number <= To;
    }

    // static bool IsDateBetween(clsDate Date, clsDate DateFrom, clsDate DateTo) // 5 1 9
    // {
    //     if (DateFrom.IsDateBeforeDate2(DateTo))
    //     {
    //         return Date.IsDateAfterDate2(DateFrom) && Date.IsDateBeforeDate2(DateTo);
    //     }
    //     else if (DateFrom.IsDateAfterDate2(DateTo))
    //     {
    //         clsDate::SwapDates(DateFrom, DateTo);
    //         return Date.IsDateAfterDate2(DateFrom) && Date.IsDateBeforeDate2(DateTo);
    //     }
    // }

    static bool IsDateBetween(clsDate Date, clsDate DateFrom, clsDate DateTo) // 5 1 9
    {
        if ((clsDate::IsDate1AfterDate2(Date, DateFrom) || clsDate::IsDate1EqualDate2(Date, DateFrom)) && (clsDate::IsDate1BeforeDate2(Date, DateTo) || clsDate::IsDate1EqualDate2(Date, DateTo)))
        {
            return true;
        }

        if ((clsDate::IsDate1AfterDate2(Date, DateTo) || clsDate::IsDate1EqualDate2(Date, DateTo)) && clsDate::IsDate1BeforeDate2(Date, DateFrom) || clsDate::IsDate1EqualDate2(Date, DateFrom))
        {
            return true;
        }

        return false;
    }

    template <typename T>
    static T ReadNumber(string ErrorMessage = "Invalid number , enter again :")
    {
        T Number = 0;

        while (!(cin >> Number))
        {
            cout << ErrorMessage << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        return Number;
    }

    // static int ReadIntNumber(string Message)
    // {
    //     int Number = 0;

    //     while (true)
    //     {
    //         cin >> Number;

    //         if (cin.fail() || cin.peek() != '\n')
    //         {
    //             cout << Message << endl;
    //             cin.clear();
    //             cin.ignore(10000, '\n');
    //         }
    //         else
    //         {
    //             break;
    //         }
    //     }

    //     return Number;
    // }

    // static int ReadIntNumber(string ErrorMessage = "Invalid number , enter again :")
    // {
    //     int Number = 0;

    //     while (!(cin >> Number))
    //     {
    //         cout << ErrorMessage << endl;
    //         cin.clear();
    //         cin.ignore(numeric_limits<streamsize>::max(), '\n');
    //     }

    //     return Number;
    // }

    // static short ReadShortNumber(string ErrorMessage = "Invalid number , enter again :")
    // {
    //     short Number = 0;

    //     while (!(cin >> Number))
    //     {
    //         cout << ErrorMessage << endl;
    //         cin.clear();
    //         cin.ignore(numeric_limits<streamsize>::max(), '\n');
    //     }

    //     return Number;
    // }

    // // static double ReadDblNumber(string Message)
    // // {
    // //     double Number = 0;

    // //     while (true)
    // //     {
    // //         cin >> Number; // 5.5

    // //         if (cin.fail() || Number == static_cast<int>(Number)) // 5.5==5
    // //         {
    // //             cout << Message << endl;
    // //             cin.clear();
    // //             cin.ignore(10000, '\n');
    // //         }
    // //         else
    // //         {
    // //             break;
    // //         }
    // //     }

    // //     return Number;
    // // }

    // static double ReadDblNumber(string ErrorMessage = "Invalid number , enter again :")
    // {
    //     double Number = 0;

    //     while (!(cin >> Number))
    //     {
    //         cout << ErrorMessage << endl;
    //         cin.clear();
    //         cin.ignore(numeric_limits<streamsize>::max(), '\n');
    //     }

    //     return Number;
    // }

    // static int ReadIntNumberBetween(int From, int To, string ErrorMessage = "Number is not within range , try again :")
    // {
    //     int UserNumber = ReadIntNumber();

    //     while (!IsNumberBetween(UserNumber, From, To))
    //     {
    //         cout << ErrorMessage << endl;
    //         UserNumber = ReadIntNumber();
    //     }

    //     return UserNumber;
    // }

    // static short ReadShortNumberBetween(short From, short To, string ErrorMessage = "Number is not within range , try again :")
    // {
    //     short UserNumber = ReadShortNumber();

    //     while (!IsNumberBetween(UserNumber, From, To))
    //     {
    //         cout << ErrorMessage << endl;
    //         UserNumber = ReadIntNumber();
    //     }

    //     return UserNumber;
    // }

    // static double ReadDblNumberBetween(double From, double To, string ErrorMessage = "Number is not within range , try again :")
    // {
    //     double UserNumber = ReadDblNumber();

    //     while (!IsNumberBetween(UserNumber, From, To))
    //     {
    //         cout << ErrorMessage << endl;
    //         UserNumber = ReadDblNumber();
    //     }

    //     return UserNumber;
    // }

    template <typename T>
    T ReadNumberBetween(T From, T To, string ErrorMessage = "Number is not within range , try again :")
    {
        T UserNumber = ReadNumber();

        while (!IsNumberBetween(UserNumber, From, To))
        {
            cout << ErrorMessage << endl;
            UserNumber = ReadNumber();
        }

        return UserNumber;
    }

    static bool IsValidDate(clsDate Date)
    {
        return Date.IsValid();
    }

    static string ReadString()
    {
        string S1 = "";

        getline(cin >> ws, S1);

        return S1;
    }
};