#pragma once

#ifdef LABTESTUTILS_EXPORTS
	#define LABTESTUTILS_API __declspec(dllexport)
#else
	#define LABTESTUTILS_API __declspec(dllimport)
#endif

#include <string>
#include <vector>

using namespace std;

class LABTESTUTILS_API LabTestUtils {
	static int FindLargestStringSize(vector<string> words);
	
public:
	static double Tester(int testNumber, double passValue, vector<string> inputs, vector<string> expecteds, vector<string> submitteds, int gameMode);
};