#include "Data.h"

int heroCount = 0;
float successRate = 0.0;


Data::Data(int mHeroCount, float mSuccessRate) {
	heroCount = mHeroCount;
	successRate = mSuccessRate;
}

void Data::setHeroCount(int mHeroCount){
	heroCount = mHeroCount;
}

int Data::getHeroCount(){
	return heroCount;
}
void Data::setSuccessRate(float mSuccessRate){
	successRate = mSuccessRate;
}
float Data::getSuccessRate(){
	return successRate;
}
