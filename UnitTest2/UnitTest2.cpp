#include "pch.h"
#include "CppUnitTest.h"
#include "../2.4/Vector.cpp"
#include "../2.4/Vector.h"





using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest241
{
	TEST_CLASS(UnitTest241)
	{
	public:

		TEST_METHOD(TestMethod1)
		{

			Vector A(3), B(3);
			Assert::AreEqual(A == B, true);
		}
	};
}
