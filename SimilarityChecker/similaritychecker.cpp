#include <string>
using namespace std;

class SimilarityChecker {
public:
	int checker(string left, string right) {
		return length_checker(left.length(), right.length());
	}
	
private:
	int length_checker(int a, int b) {
		if (a == b)
			return 60;
		if (a * 2 == b || a == 2 * b)
			return 0;

		int gap = a - b;
		int result = (1 - gap / b) * 60;
		return result;
	}
};