//Data.h

class Data {
	
	private:
		int heroCount;
		float successRate;
	public:
		Data(){

			heroCount = 0;
			successRate = 0.0;
		}
	void setHeroCount(int mHeroCount);
	int getHeroCount();
	void setSuccessRate(float mSuccessRate);
	float getSuccessRate();
};
