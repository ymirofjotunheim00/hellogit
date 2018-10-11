//Data.h

#ifndef DATA.H
#define DATA.H

class Data {
	
	private:
		int heroCount = 0;
		float successRate = 0.0;
	public:
	Data(int mHeroCount, float mSuccessRate);
	void setHeroCount(int mHeroCount);
	int getHeroCount();
	void setSuccessRate(float mSuccessRate);
	float getSuccessRate();
};

#endif
