#include <iostream>
#include <assert.h>

#include "TString.h"

int main()
{
	TString str0;
	assert(str0 == "");

	TString str("str");
	assert(str == "str");

	{ // Functions added from me. It's not in task.
		TString str10("str10", 4);
		assert(str10 == "str1");
		str10 = "str";
		assert(str10 == "str");
	}
	
	{
		TString str1(str); // Check corrected from me (to check one more function from task)
		assert(str1 == str);
		assert(str1 == "str");
	}

	TString str2 = str + str;
	str2 += str;
	str2 += "123";
	assert(str2 == "strstrstr123"); // String corrected from me


	str0 = str2;
	assert(str0 == "strstrstr123"); // String corrected from me
	assert(str0 == str2);
	str0 = str0;
	assert(str0 == str2);

	str2.Replace('s', ' ');
	assert(str2 == " tr tr tr123"); // String corrected from me

	size_t found = str2.Find("tr123"); // String corrected from me
	assert(found == 7);
	found = str2.Find("uuuuuu");
	assert(found == -1);

	str2.LTrim(' ');
	assert(str2 == "tr tr tr123"); // String corrected from me
	str2.RTrim('3');
	assert(str2 == "tr tr tr12"); // String corrected from me

	assert(str0 != str2);
	assert(str0 != "tr tr tr12"); // String corrected from me

	bool f1 = str != str2;
	assert(f1); // Check corrected from me

	bool f2 = str < str2;
	assert(f2); // Check added from me
	bool f3 = str > str2;
	assert(!f3); // Check added from me

	char c = str[0];
	char c1 = str[1];
	assert(c == 's');
	assert(c1 == 't');

	str[0] = '1';
	assert(str[0] == '1');

	size_t sz = TString("size eq 9").Size();
	assert(sz == 9);

	assert(!str0.Empty());
	assert(TString().Empty());

	std::cout << str2 << " " << str << std::endl;

	system("pause");
}