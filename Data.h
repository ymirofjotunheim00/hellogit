//Data.h

#ifndef DATA.H
#define DATA.H

class Data {
	
	private:
		int heroCount;
		float successRate;
	public:
	Data(int mHeroCount, float mSuccessRate);
	void setHeroCount(int mHeroCount);
	int getHeroCount();
	void setSuccessRate(float mSuccessRate);
	float getSuccessRate();
};

#endif
