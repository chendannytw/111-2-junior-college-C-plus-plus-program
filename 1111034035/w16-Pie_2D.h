#ifndef square2d_H
#define square2d_H

using namespace std;

//square_2d的類別(包含6個成員函數與2個資料成員)
class Pie_2d {
public:
	Pie_2d(double = 0);			//建構子	
	void setradius(const double);			//設定半徑
	double getradius();						//取得長度	
	double compute_area() const;			//計算面積

	double radius;							//長
};

#endif
