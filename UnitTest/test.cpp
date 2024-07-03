#include "pch.h"
#include "../SimilarityChecker/similaritychecker.cpp"

TEST(TestCaseName, CheckStringCount) {
	SimilarityChecker app;
	EXPECT_EQ(app.checker("ASD", "DSA"), 60);
	EXPECT_EQ(app.checker("A", "BB"), 0);
	EXPECT_EQ(app.checker("AAABB", "BAA"), 60);
	EXPECT_EQ(app.checker("AA", "AAE"), 60);
}