#ifndef Ringliste_h
#define Ringliste_h
#include <vector>
#include <string>

class Ringliste {
private:
	int readPos, writePos;
	std::vector<int> data;

public:
	Ringliste();
	Ringliste(int);
	~Ringliste();

	std::string toString() const;

	Ringliste& operator << (int);
	Ringliste& operator += (int);
	Ringliste& operator << (Ringliste);
	bool operator == (const Ringliste&) const;

};
#endif // !Ringliste_h
