#include <string>
using namespace std;

class SimilarityChecker {
public:
	int checker(string left, string right) {
		return length_checker(left.length(), right.length());
	}
	
private:
	void swap(int& a, int& b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	int length_checker(int a, int b) {
		if (a == b)
			return 60;
		
		if (a < b) {
			swap(a, b);
		}

		if (a == 2 * b)
			return 0;

		double gap = a - b;
		int result = (1 - gap / b) * 60;
		return result;
	}
};