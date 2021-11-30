#include <iostream>
#include "std_lib_facilities.h"


/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Yussef Abdelbary
 */


string Number(string in)
{
    transform(in.begin(), in.end(), in.begin(), ::tolower);

    if (in == "zero" || in == "0")
        return "0";
    else if (in == "one" || in == "1")
        return "1";
    else if (in == "two" || in == "2")
        return "2";
    else if (in == "three" || in == "3")
        return "3";
    else if (in == "four" || in == "4")
        return "4";
    else if (in == "five" || in == "5")
        return "5";
    else if (in == "six" || in == "6")
        return "6";
    else if (in == "seven" || in == "7")
        return "7";
    else if (in == "eight" || in == "8")
        return "8";
    else if (in == "nine" || in == "9")
        return "9";

    return "100";
}

int main()
{
	string operation, numstring, num2string;
	double num = 0;
	double num2 = 0;
	cout << "Please enter 2 single digit numbers in numerical value or as a string seperated by an enter and also followed by a basic calculator application *, /, +, - \n";
	
	while(cin >> numstring >> num2string >> operation) 
    {			
		
        double result = 0;
		num = stod(Number(numstring));
		num2 = stod(Number(num2string));

		
        if (!(num == 100 || num2 == 100))
		{
			if(operation=="+")
        {
            result = num + num2;
			
            cout << "The sum of "<< num << " and " << num2 << " is " << result << '\n';
        }
			else if (operation=="-")
        {
        	result = num - num2;
			
            cout << "The difference of "<< num << " and " << num2 << " is " << result << '\n';
        }
			else if (operation=="*")
        {
        	result = num * num2;
			
            cout << "The product of "<< num << " and " << num2 << " is " << result << '\n';
        }
			else if (operation=="/") 
        {
			if (num2==0) error("cant divide by zero");
			result = num/num2;
			
            cout << "The quotient of "<< num << " and " << num2 << " is " << result << '\n';
		}
			cout << "Please input a new operation ";
		}
		else
		{
			cout << "invalid input. correct way 5, 5, + OR five, five, +  "<< '\n';
			return 0;
		}
	}
}