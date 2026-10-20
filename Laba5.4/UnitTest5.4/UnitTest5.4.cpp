#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Arseniy\Desktop\Project6\Laba5.4\Laba5.4\Laba5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace My54
{
	TEST_CLASS(My54)
	{

	public:
		TEST_METHOD(TestMethod1)
		{

			double result;
			result = S0(5);
			Assert::AreEqual(result, 97.138340, 0.001);
		}
		TEST_METHOD(TestMethod2_S1)
		{

			double result;
			result = S1(5, 5);
			Assert::AreEqual(result, 97.138340, 0.001);
		}

		TEST_METHOD(TestMethod3_S2)
		{

			double result;
			result = S2(5, 19);
			Assert::AreEqual(result, 97.138340, 0.001);
		}

		TEST_METHOD(TestMethod4_S3)
		{

			double result;
			result = S3(5, 5, 1);
			Assert::AreEqual(result, 97.138340, 0.001);
		}

		TEST_METHOD(TestMethod5_S4)
		{

			double result;
			result = S4(5, 19, 1);
			Assert::AreEqual(result, 97.138340, 0.001);
		}
	};
}