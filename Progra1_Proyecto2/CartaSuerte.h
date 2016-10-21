#pragma once
#include <string>

using namespace std;
class CartaSuerte
{
private:
	string aCarta;
public:
	CartaSuerte(string);
	~CartaSuerte(void); 
	void setCarta(string);
	string getCarta();
};

