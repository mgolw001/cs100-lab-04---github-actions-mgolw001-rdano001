
#include "../header/rectangle.hpp"
#include "gtest/gtest.h"

TEST(RectangleTest, Constructor1) {
    Rectangle r (3,4)
    int height = r.get_height();
    int width = r.get_width();
    EXPECT_EQ(height,3);
    EXPECT_EQ(width,4);

}
TEST(RectangleTest, Constructor2) {
    Rectangle r (0,0)
    int height = r.get_height();
    int width = r.get_width();
    EXPECT_EQ(height,0);
    EXPECT_EQ(width,0);

}
TEST(RectangleTest, Constructor3) {
    Rectangle r (2,2)
    int height = r.get_height();
    int width = r.get_width();
    EXPECT_EQ(height,2);
    EXPECT_EQ(width,2;

}

TEST(RectangleTest, AreaTest1) {
	Rectangle a (3,4);
	int area = a.area();
	EXPECT_EQ(area,12);
}

TEST(RectangleTest, AreaTest2) {
        Rectangle a (0,0);
        int area = a.area();
        EXPECT_EQ(area,0);
}

TEST(RectangleTest, AreaTest3) {
        Rectangle a (2,2);
        int area = a.area();
        EXPECT_EQ(area,4);
}

TEST(RectangleTest, PerimeterTest1) {
	Rectangle r (3,4);
	int perimeter = r.perimeter();
	EXPECT_EQ(perimeter,14);
}
TEST(RectangleTest, PerimeterTest2) {
        Rectangle r (0,0);
        int perimeter = r.perimeter();
        EXPECT_EQ(perimeter,0);
}
TEST(RectangleTest, PerimeterTest3) {
        Rectangle r (2,2);
        int perimeter = r.perimeter();
        EXPECT_EQ(perimeter,8);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

